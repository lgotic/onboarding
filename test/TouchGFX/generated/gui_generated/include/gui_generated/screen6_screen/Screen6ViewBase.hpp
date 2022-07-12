/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef SCREEN6VIEWBASE_HPP
#define SCREEN6VIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/screen6_screen/Screen6Presenter.hpp>
#include <touchgfx/widgets/Box.hpp>

class Screen6ViewBase : public touchgfx::View<Screen6Presenter>
{
public:
    Screen6ViewBase();
    virtual ~Screen6ViewBase() {}
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
    touchgfx::Box box2;

private:

};

#endif // SCREEN6VIEWBASE_HPP