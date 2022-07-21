#include <gui/screen3_screen/Screen3View.hpp>
#include <string.h>

extern "C" {
	extern uint8_t airFryerNutrimaxStatus[20];
	extern uint8_t airFryerNutrimaxTemperature;
	extern uint8_t airFryerNutrimaxHumidity;
}

Screen3View::Screen3View()
{

}

void Screen3View::setupScreen()
{
    Screen3ViewBase::setupScreen();
}

void Screen3View::tearDownScreen()
{
    Screen3ViewBase::tearDownScreen();
}

void Screen3View::screenUpdate() {
	/*	 Unicode::snprintf(nutrimaxTempBuffer, 4, "%03d", airFryerNutrimaxTemperature);
	 nutrimaxTemp.invalidate();
*/
	 Unicode::snprintf(nutrimaxTempBuffer, NUTRIMAXTEMP_SIZE, "%03d", airFryerNutrimaxTemperature);
	 nutrimaxTemp.invalidate();

	 Unicode::snprintf(nutrimaxHumBuffer, NUTRIMAXHUM_SIZE, "%03d", airFryerNutrimaxHumidity);
	 nutrimaxHum.invalidate();

	 //Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%d", airFryerStatus);

	 for ( int i = 0 ; i < 5; i ++) {
		 nutrimaxStatusBuffer[i] = (const char)airFryerNutrimaxStatus[i];
	 }
	 for ( int i = 5; i < 10; i++ ) {
		 nutrimaxStatusBuffer[i] = 0x00;
	 }
	 nutrimaxStatus.invalidate();

}
