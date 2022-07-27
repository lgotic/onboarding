#include <gui/screen1_screen/Screen1View.hpp>
#include <gui/screen1_screen/Screen1Presenter.hpp>
#include <stdint.h>
Screen1Presenter::Screen1Presenter(Screen1View& v)
    : view(v)
{

}

void Screen1Presenter::activate()
{
	model->saveCurrentScreen(1);
}

void Screen1Presenter::deactivate()
{

}

void Screen1Presenter::selectMeni1(){
	view.meni1Update();
}

void Screen1Presenter::selectMeni2(){
	view.meni2Update();
}

void Screen1Presenter::selectMeni3(){
	view.meni3Update();
}

void Screen1Presenter::selectMeni4(){
	view.meni4Update();
}

void Screen1Presenter::selectMeni5(){
	view.meni5Update();

}

void Screen1Presenter::changeScreen(uint8_t selectedScreen) {
	view.tearDownScreen();
	if (selectedScreen == 0) {
		application().gotoScreen2ScreenNoTransition();
	}
	else if (selectedScreen == 1) {
		application().gotoScreen3ScreenNoTransition();
	}
	else if (selectedScreen == 2) {
		application().gotoScreen4ScreenNoTransition();
	}
	else if (selectedScreen == 3) {
		application().gotoScreen5ScreenNoTransition();
	}
	else if (selectedScreen == 4) {
		application().gotoScreen6ScreenNoTransition();
	}
}

