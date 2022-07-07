/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef FRONTENDAPPLICATIONBASE_HPP
#define FRONTENDAPPLICATIONBASE_HPP

#include <mvp/MVPApplication.hpp>
#include <gui/model/Model.hpp>

class FrontendHeap;

class FrontendApplicationBase : public touchgfx::MVPApplication
{
public:
    FrontendApplicationBase(Model& m, FrontendHeap& heap);
    virtual ~FrontendApplicationBase() { }

    virtual void changeToStartScreen()
    {
        gotoScreen1ScreenNoTransition();
    }

    // Screen1
    void gotoScreen1ScreenNoTransition();

    // slika1
    void gotoslika1ScreenNoTransition();

    // slika2
    void gotoslika2ScreenNoTransition();

    // slika3
    void gotoslika3ScreenNoTransition();

    // slika4
    void gotoslika4ScreenNoTransition();

    // slika5
    void gotoslika5ScreenNoTransition();

    // slika6
    void gotoslika6ScreenNoTransition();

protected:
    touchgfx::Callback<FrontendApplicationBase> transitionCallback;
    FrontendHeap& frontendHeap;
    Model& model;

    // Screen1
    void gotoScreen1ScreenNoTransitionImpl();

    // slika1
    void gotoslika1ScreenNoTransitionImpl();

    // slika2
    void gotoslika2ScreenNoTransitionImpl();

    // slika3
    void gotoslika3ScreenNoTransitionImpl();

    // slika4
    void gotoslika4ScreenNoTransitionImpl();

    // slika5
    void gotoslika5ScreenNoTransitionImpl();

    // slika6
    void gotoslika6ScreenNoTransitionImpl();
};

#endif // FRONTENDAPPLICATIONBASE_HPP
