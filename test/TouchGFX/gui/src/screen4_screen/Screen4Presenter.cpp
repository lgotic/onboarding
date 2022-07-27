#include <gui/screen4_screen/Screen4View.hpp>
#include <gui/screen4_screen/Screen4Presenter.hpp>

Screen4Presenter::Screen4Presenter(Screen4View& v)
    : view(v)
{

}

void Screen4Presenter::activate()
{
	model->saveCurrentScreen(4);
}

void Screen4Presenter::deactivate()
{

}

void Screen4Presenter::changeScreen(uint8_t selectedScreen) {
	view.tearDownScreen();
	application().gotoScreen1ScreenNoTransition();
}
