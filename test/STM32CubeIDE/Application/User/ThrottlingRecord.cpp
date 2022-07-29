/*
 * ThrottlingRecord.cpp
 *
 *  Created on: 20. srp 2022.
 *      Author: Luka
 */

#include "ThrottlingRecord.hpp"



ThrottlingRecord::ThrottlingRecord(Event::Type eventType, uint32_t throttleTime) : eventType(eventType), throttleTime(throttleTime) {

}

//update koliko je vremena proslo od zadnjeg trotlanja
void ThrottlingRecord::setPassedTime(uint32_t passedTime) {
	passedTimeCont = passedTime;
}


// koliko je vremena proslo od zadnjeg trotlanja
uint32_t ThrottlingRecord::getPassedTime() {
	return passedTimeCont;
}

Event::Type ThrottlingRecord::getEventType() {

	return eventType;
}

bool ThrottlingRecord::shuldThrottle() {
	volatile bool shouldThrottle = FALSE;

	if ( passedTimeCont > throttleTime) {
		shouldThrottle = TRUE;
	}
	else {
		shouldThrottle = FALSE;
	}
	return shouldThrottle;
}
