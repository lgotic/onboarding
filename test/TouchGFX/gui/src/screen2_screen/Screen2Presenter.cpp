#include <gui/screen2_screen/Screen2View.hpp>
#include <gui/screen2_screen/Screen2Presenter.hpp>

Screen2Presenter::Screen2Presenter(Screen2View& v)
    : view(v)
{

}

void Screen2Presenter::activate()
{
	model->saveCurrentScreen(2);
}

void Screen2Presenter::deactivate()
{

}

void Screen2Presenter::changeScreen(uint8_t selectedScreen) {
	view.tearDownScreen();
	application().gotoScreen1ScreenNoTransition();
}

