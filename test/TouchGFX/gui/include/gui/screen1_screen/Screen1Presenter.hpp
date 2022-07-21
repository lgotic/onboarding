#ifndef SCREEN1PRESENTER_HPP
#define SCREEN1PRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>
#include <stdint.h>
using namespace touchgfx;

class Screen1View;

class Screen1Presenter : public touchgfx::Presenter, public ModelListener
{
public:
    Screen1Presenter(Screen1View& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual ~Screen1Presenter() {};
    void selectMeni1();
    void selectMeni2();
    void selectMeni3();
    void selectMeni4();
    void selectMeni5();
    void changeScreen(uint8_t selectedScreen);

protected:
    FrontendApplication& application() {
            return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
        }

private:
    Screen1Presenter();

    Screen1View& view;
};

#endif // SCREEN1PRESENTER_HPP
