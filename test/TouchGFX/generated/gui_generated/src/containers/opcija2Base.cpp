/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/containers/opcija2Base.hpp>
#include <touchgfx/Color.hpp>
#include <texts/TextKeysAndLanguages.hpp>

opcija2Base::opcija2Base()
{
    setWidth(250);
    setHeight(40);
    box1.setPosition(0, 0, 250, 39);
    box1.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));

    textArea1.setXY(12, 8);
    textArea1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textArea1.setLinespacing(0);
    textArea1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_YXOU));

    add(box1);
    add(textArea1);
}

opcija2Base::~opcija2Base()
{

}

void opcija2Base::initialize()
{

}
