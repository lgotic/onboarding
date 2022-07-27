#include <gui/screen5_screen/Screen5View.hpp>
#include <gui/screen5_screen/Screen5Presenter.hpp>

Screen5Presenter::Screen5Presenter(Screen5View& v)
    : view(v)
{

}

void Screen5Presenter::activate()
{
	model->saveCurrentScreen(5);
}

void Screen5Presenter::deactivate()
{

}
void Screen5Presenter::changeScreen(uint8_t selectedScreen) {
	view.tearDownScreen();
	application().gotoScreen1ScreenNoTransition();
}
