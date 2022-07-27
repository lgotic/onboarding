#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>
#include <stdint.h>
#include <gui/common/FrontendApplication.hpp>
#include <FreeRTOS.h>
#include <queue.h>
extern "C" {
	extern uint8_t meniScroller;
	extern uint8_t meniSelect;
	extern QueueHandle_t airFryerQueue;
	extern struct airFryer fryer;
}



Model::Model() : modelListener(0), activeScreen(0)
{

}

void Model::tick()
{
	//struct airFryer fryer;
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

	xQueueReceive(airFryerQueue,(void*)&fryer,0);


}



void Model::saveCurrentScreen(uint8_t cScreen) {
	activeScreen = cScreen;
}

uint8_t Model::getCurrentScreen() {
	return activeScreen;
}
