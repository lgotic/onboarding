/*
 * ThrottlingRecord.cpp
 *
 *  Created on: 20. srp 2022.
 *      Author: Luka
 */

#include "ThrottlingController.hpp"
#define TOTAL_EVENT_NUMBER 		3

extern "C" uint8_t getThrottling (uint8_t eventType);
extern "C" void timeForThrottling (uint32_t time);
extern "C" void resetThrottlingTime(uint8_t eventType);
/*
ThrottlingController::updateTimes(uint32_t inc) {
}
*/

ThrottlingController tc;

ThrottlingController::ThrottlingController(){

}

bool ThrottlingController::shuldThrottle(Event::Type eventType) {
	/*bool throttling = throttlingRecords[eventType].shuldThrottle();
	return throttling;
*/
	//bool throttling = FALSE;
	volatile bool throttling = FALSE;
	volatile uint8_t arrayPosition = 0 ;
	while (throttlingRecords[arrayPosition].getEventType() != eventType) {
		arrayPosition++;
	}
	 throttling =  throttlingRecords[arrayPosition].shuldThrottle();
	 return throttling;

}

void ThrottlingController::markAsSent(Event::Type eventType){
	throttlingRecords[eventType].setPassedTime(0);
}

void ThrottlingController::updateTimes(uint32_t inc){
	uint32_t curentTime = 0;
	for (auto& objNumber: throttlingRecords) {
		curentTime = objNumber.getPassedTime();
		curentTime = curentTime + inc;
		objNumber.setPassedTime(curentTime);
	}
}


void timeForThrottling (volatile uint32_t time) {
	volatile static uint32_t lastTime = 0 ;
	volatile uint32_t timeDelta = time - lastTime;
	lastTime = time;
	tc.updateTimes(timeDelta);
}

uint8_t getThrottling (uint8_t eventType) {
	bool throttling = 0 ;
	if ( eventType == Event::BUTTON_PRESSED){
		throttling = tc.shuldThrottle(Event::BUTTON_PRESSED);
		if ( throttling == TRUE) {
			tc.markAsSent(Event::BUTTON_PRESSED);
		}
	}
	else if (eventType == Event::THROTTLING_DOWN){
		throttling = tc.shuldThrottle(Event::THROTTLING_DOWN);
		if ( throttling == TRUE) {
			tc.markAsSent(Event::THROTTLING_DOWN);
		}
	}
	else if ( eventType == Event::THROTTLING_UP){
		throttling = tc.shuldThrottle(Event::THROTTLING_UP);
		if ( throttling == TRUE) {
			tc.markAsSent(Event::THROTTLING_UP);
		}
	}

	return throttling;
}

void resetThrottlingTime (uint8_t eventType) {

	tc.markAsSent((Event::Type)eventType);

}
