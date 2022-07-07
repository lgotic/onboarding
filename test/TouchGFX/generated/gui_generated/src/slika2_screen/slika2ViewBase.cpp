/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/slika2_screen/slika2ViewBase.hpp>
#include <touchgfx/Color.hpp>

slika2ViewBase::slika2ViewBase()
{

    __background.setPosition(0, 0, 320, 240);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));

    box1.setPosition(0, 0, 320, 240);
    box1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));

    box2.setPosition(270, 0, 50, 50);
    box2.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));

    add(__background);
    add(box1);
    add(box2);
}

void slika2ViewBase::setupScreen()
{

}

//Handles when a key is pressed
void slika2ViewBase::handleKeyEvent(uint8_t key)
{
    if(16 == key)
    {
        //Interaction1
        //When hardware button 16 clicked change screen to Screen1
        //Go to Screen1 with no screen transition
        application().gotoScreen1ScreenNoTransition();
    }
}
