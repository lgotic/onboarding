/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screen1_screen/Screen1ViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

Screen1ViewBase::Screen1ViewBase()
{

    __background.setPosition(0, 0, 240, 320);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));

    box1.setPosition(0, 0, 240, 320);
    box1.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));

    button1Off.setXY(5, 0);
    button1Off.setBitmaps(touchgfx::Bitmap(BITMAP_DARK_BUTTONS_SQUARE_MEDIUM_PRESSED_ID), touchgfx::Bitmap(BITMAP_DARK_BUTTONS_SQUARE_MEDIUM_ID));
    button1Off.setLabelText(touchgfx::TypedText(T___SINGLEUSE_I0B7));
    button1Off.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    button1Off.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));

    button1On.setXY(5, 0);
    button1On.setVisible(false);
    button1On.setBitmaps(touchgfx::Bitmap(BITMAP_DARK_BUTTONS_SQUARE_MEDIUM_ID), touchgfx::Bitmap(BITMAP_DARK_BUTTONS_SQUARE_MEDIUM_ID));
    button1On.setLabelText(touchgfx::TypedText(T___SINGLEUSE_V62M));
    button1On.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    button1On.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));

    button2Off.setXY(5, 60);
    button2Off.setBitmaps(touchgfx::Bitmap(BITMAP_DARK_BUTTONS_SQUARE_MEDIUM_PRESSED_ID), touchgfx::Bitmap(BITMAP_DARK_BUTTONS_SQUARE_MEDIUM_ID));
    button2Off.setLabelText(touchgfx::TypedText(T___SINGLEUSE_01DN));
    button2Off.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    button2Off.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));

    button2On.setXY(5, 60);
    button2On.setVisible(false);
    button2On.setBitmaps(touchgfx::Bitmap(BITMAP_DARK_BUTTONS_SQUARE_MEDIUM_ID), touchgfx::Bitmap(BITMAP_DARK_BUTTONS_SQUARE_MEDIUM_ID));
    button2On.setLabelText(touchgfx::TypedText(T___SINGLEUSE_14XS));
    button2On.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    button2On.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));

    button3Off.setXY(5, 120);
    button3Off.setBitmaps(touchgfx::Bitmap(BITMAP_DARK_BUTTONS_SQUARE_MEDIUM_PRESSED_ID), touchgfx::Bitmap(BITMAP_DARK_BUTTONS_SQUARE_MEDIUM_ID));
    button3Off.setLabelText(touchgfx::TypedText(T___SINGLEUSE_0UHC));
    button3Off.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    button3Off.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));

    button3On.setXY(5, 120);
    button3On.setVisible(false);
    button3On.setBitmaps(touchgfx::Bitmap(BITMAP_DARK_BUTTONS_SQUARE_MEDIUM_ID), touchgfx::Bitmap(BITMAP_DARK_BUTTONS_SQUARE_MEDIUM_ID));
    button3On.setLabelText(touchgfx::TypedText(T___SINGLEUSE_RQG8));
    button3On.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    button3On.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));

    button4Off.setXY(5, 180);
    button4Off.setBitmaps(touchgfx::Bitmap(BITMAP_DARK_BUTTONS_SQUARE_MEDIUM_PRESSED_ID), touchgfx::Bitmap(BITMAP_DARK_BUTTONS_SQUARE_MEDIUM_ID));
    button4Off.setLabelText(touchgfx::TypedText(T___SINGLEUSE_YK2A));
    button4Off.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    button4Off.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));

    button4On.setXY(5, 180);
    button4On.setVisible(false);
    button4On.setBitmaps(touchgfx::Bitmap(BITMAP_DARK_BUTTONS_SQUARE_MEDIUM_ID), touchgfx::Bitmap(BITMAP_DARK_BUTTONS_SQUARE_MEDIUM_ID));
    button4On.setLabelText(touchgfx::TypedText(T___SINGLEUSE_GP7M));
    button4On.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    button4On.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));

    button5Off.setXY(5, 240);
    button5Off.setBitmaps(touchgfx::Bitmap(BITMAP_DARK_BUTTONS_SQUARE_MEDIUM_PRESSED_ID), touchgfx::Bitmap(BITMAP_DARK_BUTTONS_SQUARE_MEDIUM_ID));
    button5Off.setLabelText(touchgfx::TypedText(T___SINGLEUSE_IPK1));
    button5Off.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    button5Off.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));

    button5On.setXY(5, 240);
    button5On.setVisible(false);
    button5On.setBitmaps(touchgfx::Bitmap(BITMAP_DARK_BUTTONS_SQUARE_MEDIUM_ID), touchgfx::Bitmap(BITMAP_DARK_BUTTONS_SQUARE_MEDIUM_ID));
    button5On.setLabelText(touchgfx::TypedText(T___SINGLEUSE_22TH));
    button5On.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    button5On.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));

    add(__background);
    add(box1);
    add(button1Off);
    add(button1On);
    add(button2Off);
    add(button2On);
    add(button3Off);
    add(button3On);
    add(button4Off);
    add(button4On);
    add(button5Off);
    add(button5On);
}

void Screen1ViewBase::setupScreen()
{

}
