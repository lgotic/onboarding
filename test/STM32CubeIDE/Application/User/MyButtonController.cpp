#include <MyButtonController.hpp>
#include <main.h>
#include <touchgfx/hal/HAL.hpp>

void MyButtonController::init()
{
	previousState = 0xff;
}

bool MyButtonController::sample(uint8_t &key)
{
	static uint8_t keyInc = 0;
	if (HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_0) == GPIO_PIN_SET)
	    {
	    	if (previousState == 0xFF)
	    	{
	    		previousState = 0x00;
	    		//User_ButtonState = 0x00;
		        key = keyInc;
		        if (keyInc >= 5) {
		        	keyInc = 0;
		        }
		        else {
		        	keyInc++;
		        }
		        return true;

	    	}
	    	return false;

	    }
	    previousState = 0xFF;
	    return false;
}

