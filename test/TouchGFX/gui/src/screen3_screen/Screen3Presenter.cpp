#include <gui/screen3_screen/Screen3View.hpp>
#include <gui/screen3_screen/Screen3Presenter.hpp>

Screen3Presenter::Screen3Presenter(Screen3View& v)
    : view(v)
{

}

void Screen3Presenter::activate()
{
	model->saveCurrentScreen(3);
}

void Screen3Presenter::deactivate()
{

}
void Screen3Presenter::changeScreen(uint8_t selectedScreen) {
	view.tearDownScreen();
	application().gotoScreen1ScreenNoTransition();
}
