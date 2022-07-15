#include <gui/screen2_screen/Screen2View.hpp>
#include <string.h>
extern "C" {
	extern uint8_t airFryerStatus[20];
	extern uint8_t airFryerTemperature;
	extern uint8_t airFryerHumidity;
}

Screen2View::Screen2View()
{

}

void Screen2View::setupScreen()
{



    Screen2ViewBase::setupScreen();
}

void Screen2View::tearDownScreen()
{
    Screen2ViewBase::tearDownScreen();
}

void Screen2View::screenUpdate() {
	 Unicode::snprintf(textAreaTemperatureBuffer, TEXTAREATEMPERATURE_SIZE, "%03d", airFryerTemperature);
	 textAreaTemperature.invalidate();

	 Unicode::snprintf(textAreaHumidityBuffer, TEXTAREAHUMIDITY_SIZE, "%03d", airFryerHumidity);
	 textAreaHumidity.invalidate();

	 //Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%d", airFryerStatus);

	 for ( int i = 0 ; i < 5; i ++) {
		 textArea1Buffer[i] = (const char)airFryerStatus[i];
	 }
	 for ( int i = 5; i < 10; i++ ) {
		 textArea1Buffer[i] = 0x00;
	 }
	 textArea1.invalidate();
}
