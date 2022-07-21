#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>
#include <stdint.h>
#include <gui/common/FrontendApplication.hpp>

extern "C" {
	extern uint8_t meniScroller;
	extern uint8_t meniSelect;
}

Model::Model() : modelListener(0), activeScreen(0)
{

}

void Model::tick()
{
	if ( meniScroller == 0) {modelListener->selectMeni1();}
	else if ( meniScroller == 1) {modelListener->selectMeni2();}
	else if ( meniScroller == 2) {modelListener->selectMeni3();}
	else if ( meniScroller == 3) {modelListener->selectMeni4();}
	else if ( meniScroller == 4) {modelListener->selectMeni5();}
	if ( meniSelect == 1 ) {
		meniSelect = 0;
		modelListener->changeScreen(meniScroller);
	}
	modelListener->updateValues();
	modelListener->updateNutrimaxValues();
}



void Model::saveCurrentScreen(uint8_t cScreen) {
	activeScreen = cScreen;
}

uint8_t Model::getCurrentScreen() {
	return activeScreen;
}
