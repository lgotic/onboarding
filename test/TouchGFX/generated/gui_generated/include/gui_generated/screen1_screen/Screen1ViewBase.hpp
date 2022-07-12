/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef SCREEN1VIEWBASE_HPP
#define SCREEN1VIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/screen1_screen/Screen1Presenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/ButtonWithLabel.hpp>

class Screen1ViewBase : public touchgfx::View<Screen1Presenter>
{
public:
    Screen1ViewBase();
    virtual ~Screen1ViewBase() {}
    virtual void setupScreen();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::Box box1;
    touchgfx::ButtonWithLabel button1Off;
    touchgfx::ButtonWithLabel button1On;
    touchgfx::ButtonWithLabel button2Off;
    touchgfx::ButtonWithLabel button2On;
    touchgfx::ButtonWithLabel button3Off;
    touchgfx::ButtonWithLabel button3On;
    touchgfx::ButtonWithLabel button4Off;
    touchgfx::ButtonWithLabel button4On;
    touchgfx::ButtonWithLabel button5Off;
    touchgfx::ButtonWithLabel button5On;

private:

};

#endif // SCREEN1VIEWBASE_HPP
