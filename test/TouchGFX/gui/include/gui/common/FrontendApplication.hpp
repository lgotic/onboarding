#ifndef FRONTENDAPPLICATION_HPP
#define FRONTENDAPPLICATION_HPP

#include <gui_generated/common/FrontendApplicationBase.hpp>

class FrontendHeap;

using namespace touchgfx;

class FrontendApplication : public FrontendApplicationBase
{
public:
    FrontendApplication(Model& m, FrontendHeap& heap);
    virtual ~FrontendApplication() { }

    virtual void handleTickEvent()
    {
        model.tick();
        FrontendApplicationBase::handleTickEvent();
    }
 /*  virtual void changeToNewScreen () {
    	gotoScreen2ScreenNoTransition();
    }
    void gotoScreen2ScreenNoTransition();
protected:
    touchgfx::Callback<FrontendApplication> transitionCallback;

    void gotoScreen2ScreenNoTransitionImpl();
*/
private:

};

#endif // FRONTENDAPPLICATION_HPP
