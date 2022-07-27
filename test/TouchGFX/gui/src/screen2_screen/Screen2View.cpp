#include <gui/screen2_screen/Screen2View.hpp>
#include <string.h>
#include "main.h"
extern "C" {
	extern struct airFryer fryer;
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
	 Unicode::snprintf(textAreaTemperatureBuffer, TEXTAREATEMPERATURE_SIZE, "%03d", fryer.Temperature);
	 textAreaTemperature.invalidate();

	 Unicode::snprintf(textAreaHumidityBuffer, TEXTAREAHUMIDITY_SIZE, "%03d", fryer.Humidity);
	 textAreaHumidity.invalidate();

	 //Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%d", airFryerStatus);

	 for ( int i = 0 ; i < 5; i ++) {
		 textArea1Buffer[i] = (const char)fryer.Status[i];
	 }
	 for ( int i = 5; i < 10; i++ ) {
		 textArea1Buffer[i] = 0x00;
	 }
	 textArea1.invalidate();
}
