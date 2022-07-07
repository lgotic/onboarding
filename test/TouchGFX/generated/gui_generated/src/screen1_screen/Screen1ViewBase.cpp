/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screen1_screen/Screen1ViewBase.hpp>
#include <touchgfx/Color.hpp>

Screen1ViewBase::Screen1ViewBase() :
    moveOptionOneEndedCallback(this, &Screen1ViewBase::moveOptionOneEndedCallbackHandler),
    moveOpetionTwoEndedCallback(this, &Screen1ViewBase::moveOpetionTwoEndedCallbackHandler),
    moveOptionThreeEndedCallback(this, &Screen1ViewBase::moveOptionThreeEndedCallbackHandler),
    moveOpetionFourEndedCallback(this, &Screen1ViewBase::moveOpetionFourEndedCallbackHandler),
    moveOptionFiveEndedCallback(this, &Screen1ViewBase::moveOptionFiveEndedCallbackHandler),
    moveOptionSixEndedCallback(this, &Screen1ViewBase::moveOptionSixEndedCallbackHandler)
{

    __background.setPosition(0, 0, 320, 240);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));

    box1.setPosition(0, 0, 320, 240);
    box1.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));

    opcija11.setXY(0, 0);

    opcija21.setXY(0, 39);

    opcija31.setXY(0, 80);

    opcija41.setXY(0, 120);

    opcija51.setXY(0, 160);

    opcija61.setXY(0, 200);

    add(__background);
    add(box1);
    add(opcija11);
    add(opcija21);
    add(opcija31);
    add(opcija41);
    add(opcija51);
    add(opcija61);
}

void Screen1ViewBase::setupScreen()
{
    opcija11.initialize();
    opcija21.initialize();
    opcija31.initialize();
    opcija41.initialize();
    opcija51.initialize();
    opcija61.initialize();
}

//Handles when a key is pressed
void Screen1ViewBase::handleKeyEvent(uint8_t key)
{
    if(0 == key)
    {
        //moveOptionOne
        //When hardware button 0 clicked move opcija11
        //Move opcija11 to x:20, y:0 with LinearOut easing in 50 ms (3 Ticks)
        opcija11.clearMoveAnimationEndedAction();
        opcija11.startMoveAnimation(20, 0, 3, touchgfx::EasingEquations::linearEaseOut, touchgfx::EasingEquations::linearEaseOut);
        opcija11.setMoveAnimationEndedAction(moveOptionOneEndedCallback);
    }
    if(1 == key)
    {
        //moveOpetionTwo
        //When hardware button 1 clicked move opcija21
        //Move opcija21 to x:20, y:39 with LinearOut easing in 50 ms (3 Ticks)
        opcija21.clearMoveAnimationEndedAction();
        opcija21.startMoveAnimation(20, 39, 3, touchgfx::EasingEquations::linearEaseOut, touchgfx::EasingEquations::linearEaseOut);
        opcija21.setMoveAnimationEndedAction(moveOpetionTwoEndedCallback);
    }
    if(2 == key)
    {
        //moveOptionThree
        //When hardware button 2 clicked move opcija31
        //Move opcija31 to x:20, y:80 with LinearOut easing in 50 ms (3 Ticks)
        opcija31.clearMoveAnimationEndedAction();
        opcija31.startMoveAnimation(20, 80, 3, touchgfx::EasingEquations::linearEaseOut, touchgfx::EasingEquations::linearEaseOut);
        opcija31.setMoveAnimationEndedAction(moveOptionThreeEndedCallback);
    }
    if(3 == key)
    {
        //moveOpetionFour
        //When hardware button 3 clicked move opcija41
        //Move opcija41 to x:20, y:120 with LinearIn easing in 50 ms (3 Ticks)
        opcija41.clearMoveAnimationEndedAction();
        opcija41.startMoveAnimation(20, 120, 3, touchgfx::EasingEquations::linearEaseIn, touchgfx::EasingEquations::linearEaseIn);
        opcija41.setMoveAnimationEndedAction(moveOpetionFourEndedCallback);
    }
    if(4 == key)
    {
        //moveOptionFive
        //When hardware button 4 clicked move opcija51
        //Move opcija51 to x:20, y:160 with LinearIn easing in 50 ms (3 Ticks)
        opcija51.clearMoveAnimationEndedAction();
        opcija51.startMoveAnimation(20, 160, 3, touchgfx::EasingEquations::linearEaseIn, touchgfx::EasingEquations::linearEaseIn);
        opcija51.setMoveAnimationEndedAction(moveOptionFiveEndedCallback);
    }
    if(5 == key)
    {
        //moveOptionSix
        //When hardware button 5 clicked move opcija61
        //Move opcija61 to x:20, y:200 with LinearIn easing in 50 ms (3 Ticks)
        opcija61.clearMoveAnimationEndedAction();
        opcija61.startMoveAnimation(20, 200, 3, touchgfx::EasingEquations::linearEaseIn, touchgfx::EasingEquations::linearEaseIn);
        opcija61.setMoveAnimationEndedAction(moveOptionSixEndedCallback);
    }
    if(10 == key)
    {
        //changeToSlika1
        //When hardware button 10 clicked change screen to slika1
        //Go to slika1 with no screen transition
        application().gotoslika1ScreenNoTransition();
    }
    if(11 == key)
    {
        //changeToSlika2
        //When hardware button 11 clicked change screen to slika2
        //Go to slika2 with no screen transition
        application().gotoslika2ScreenNoTransition();
    }
    if(12 == key)
    {
        //changeToSlika3
        //When hardware button 12 clicked change screen to slika3
        //Go to slika3 with no screen transition
        application().gotoslika3ScreenNoTransition();
    }
    if(13 == key)
    {
        //changeToSlika4
        //When hardware button 13 clicked change screen to slika4
        //Go to slika4 with no screen transition
        application().gotoslika4ScreenNoTransition();
    }
    if(14 == key)
    {
        //changeToSlika5
        //When hardware button 14 clicked change screen to slika5
        //Go to slika5 with no screen transition
        application().gotoslika5ScreenNoTransition();
    }
    if(15 == key)
    {
        //changeToSlika6
        //When hardware button 15 clicked change screen to slika6
        //Go to slika6 with no screen transition
        application().gotoslika6ScreenNoTransition();
    }
}

void Screen1ViewBase::moveOptionOneEndedCallbackHandler(const touchgfx::MoveAnimator<opcija1>& comp)
{
    //moveOptionSixBack
    //When moveOptionOne completed move opcija61
    //Move opcija61 to x:0, y:200 with LinearIn easing in 50 ms (3 Ticks)
    opcija61.clearMoveAnimationEndedAction();
    opcija61.startMoveAnimation(0, 200, 3, touchgfx::EasingEquations::linearEaseIn, touchgfx::EasingEquations::linearEaseIn);
}

void Screen1ViewBase::moveOpetionTwoEndedCallbackHandler(const touchgfx::MoveAnimator<opcija2>& comp)
{
    //moveOptionOneBack
    //When moveOpetionTwo completed move opcija11
    //Move opcija11 to x:0, y:0 with LinearOut easing in 20 ms (1 Ticks)
    opcija11.clearMoveAnimationEndedAction();
    opcija11.startMoveAnimation(0, 0, 1, touchgfx::EasingEquations::linearEaseOut, touchgfx::EasingEquations::linearEaseOut);
}

void Screen1ViewBase::moveOptionThreeEndedCallbackHandler(const touchgfx::MoveAnimator<opcija3>& comp)
{
    //moveOptionTwoBack
    //When moveOptionThree completed move opcija21
    //Move opcija21 to x:0, y:39 with LinearIn easing in 50 ms (3 Ticks)
    opcija21.clearMoveAnimationEndedAction();
    opcija21.startMoveAnimation(0, 39, 3, touchgfx::EasingEquations::linearEaseIn, touchgfx::EasingEquations::linearEaseIn);
}

void Screen1ViewBase::moveOpetionFourEndedCallbackHandler(const touchgfx::MoveAnimator<opcija4>& comp)
{
    //moveOptionThreeBack
    //When moveOpetionFour completed move opcija31
    //Move opcija31 to x:0, y:80 with LinearIn easing in 50 ms (3 Ticks)
    opcija31.clearMoveAnimationEndedAction();
    opcija31.startMoveAnimation(0, 80, 3, touchgfx::EasingEquations::linearEaseIn, touchgfx::EasingEquations::linearEaseIn);
}

void Screen1ViewBase::moveOptionFiveEndedCallbackHandler(const touchgfx::MoveAnimator<opcija5>& comp)
{
    //moveOpetionFourBack
    //When moveOptionFive completed move opcija41
    //Move opcija41 to x:0, y:120 with LinearIn easing in 50 ms (3 Ticks)
    opcija41.clearMoveAnimationEndedAction();
    opcija41.startMoveAnimation(0, 120, 3, touchgfx::EasingEquations::linearEaseIn, touchgfx::EasingEquations::linearEaseIn);
}

void Screen1ViewBase::moveOptionSixEndedCallbackHandler(const touchgfx::MoveAnimator<opcija6>& comp)
{
    //moveOptionFiveBack
    //When moveOptionSix completed move opcija51
    //Move opcija51 to x:0, y:160 with LinearIn easing in 50 ms (3 Ticks)
    opcija51.clearMoveAnimationEndedAction();
    opcija51.startMoveAnimation(0, 160, 3, touchgfx::EasingEquations::linearEaseIn, touchgfx::EasingEquations::linearEaseIn);
}
