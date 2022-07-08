#include <MyButtonController.hpp>
#include <main.h>
#include <touchgfx/hal/HAL.hpp>


extern "C" {
	extern uint8_t selectButtonState;
	extern uint8_t changeMeniItem;
	extern TIM_HandleTypeDef htim2;
}
void MyButtonController::init()
{
	//previousState = 0xff;
}

bool MyButtonController::sample(uint8_t &key)
{
	static uint8_t keyInc = 0;
	static uint8_t changeScreenFlag = 0;
/*	if(changeMeniItem == 0x01)
	{
		changeMeniItem = 0;
		if (changeScreenFlag == 0) {
			key = keyInc;
			if (keyInc >= 5) {
				keyInc = 0;
			}
		else {
			keyInc++;
			}
		HAL_Delay(100);
		return true;
		}

	  }

	if(changeMeniItem == 0x02)
		{
			changeMeniItem = 0;

			HAL_Delay(100);
			//return true;


		  }*/

	if (selectButtonState) {
		selectButtonState = 0;
		key = keyInc + 10;
		keyInc = 6;
		if (changeScreenFlag == 0) {
			changeScreenFlag = 1;
		}
		else {
			changeScreenFlag = 0;
			keyInc = 0;
		}
		return true;
	}
	else {
		if (changeScreenFlag != 1 ) {
			key = __HAL_TIM_GET_COUNTER(&htim2);
			keyInc = key;
			return true;
		}

	}

	return false;
}

