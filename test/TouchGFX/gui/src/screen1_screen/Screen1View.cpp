#include <gui/screen1_screen/Screen1View.hpp>

Screen1View::Screen1View()
{

}

void Screen1View::setupScreen()
{
    Screen1ViewBase::setupScreen();
}

void Screen1View::tearDownScreen()
{
    Screen1ViewBase::tearDownScreen();
}

void Screen1View::meni1Update() {
	button1On.setVisible(true);
	button2On.setVisible(false);
	button3On.setVisible(false);
	button4On.setVisible(false);
	button5On.setVisible(false);

	button1Off.setVisible(false);
	button2Off.setVisible(true);
	button3Off.setVisible(true);
	button4Off.setVisible(true);
	button5Off.setVisible(true);

	button1On.invalidate();
	button1Off.invalidate();
	button2On.invalidate();
	button2Off.invalidate();
	button3On.invalidate();
	button3Off.invalidate();
	button4On.invalidate();
	button4Off.invalidate();
	button5On.invalidate();
	button5Off.invalidate();
}

void Screen1View::meni2Update() {
	button1On.setVisible(false);
	button2On.setVisible(true);
	button3On.setVisible(false);
	button4On.setVisible(false);
	button5On.setVisible(false);

	button1Off.setVisible(true);
	button2Off.setVisible(false);
	button3Off.setVisible(true);
	button4Off.setVisible(true);
	button5Off.setVisible(true);

	button1On.invalidate();
	button1Off.invalidate();
	button2On.invalidate();
	button2Off.invalidate();
	button3On.invalidate();
	button3Off.invalidate();
	button4On.invalidate();
	button4Off.invalidate();
	button5On.invalidate();
	button5Off.invalidate();
}
void Screen1View::meni3Update() {
	button1On.setVisible(false);
	button2On.setVisible(false);
	button3On.setVisible(true);
	button4On.setVisible(false);
	button5On.setVisible(false);

	button1Off.setVisible(true);
	button2Off.setVisible(true);
	button3Off.setVisible(false);
	button4Off.setVisible(true);
	button5Off.setVisible(true);

	button1On.invalidate();
	button1Off.invalidate();
	button2On.invalidate();
	button2Off.invalidate();
	button3On.invalidate();
	button3Off.invalidate();
	button4On.invalidate();
	button4Off.invalidate();
	button5On.invalidate();
	button5Off.invalidate();
}
void Screen1View::meni4Update() {
	button1On.setVisible(false);
	button2On.setVisible(false);
	button3On.setVisible(false);
	button4On.setVisible(true);
	button5On.setVisible(false);

	button1Off.setVisible(true);
	button2Off.setVisible(true);
	button3Off.setVisible(true);
	button4Off.setVisible(false);
	button5Off.setVisible(true);

	button1On.invalidate();
	button1Off.invalidate();
	button2On.invalidate();
	button2Off.invalidate();
	button3On.invalidate();
	button3Off.invalidate();
	button4On.invalidate();
	button4Off.invalidate();
	button5On.invalidate();
	button5Off.invalidate();
}
void Screen1View::meni5Update() {
	button1On.setVisible(false);
	button2On.setVisible(false);
	button3On.setVisible(false);
	button4On.setVisible(false);
	button5On.setVisible(true);

	button1Off.setVisible(true);
	button2Off.setVisible(true);
	button3Off.setVisible(true);
	button4Off.setVisible(true);
	button5Off.setVisible(false);

	button1On.invalidate();
	button1Off.invalidate();
	button2On.invalidate();
	button2Off.invalidate();
	button3On.invalidate();
	button3Off.invalidate();
	button4On.invalidate();
	button4Off.invalidate();
	button5On.invalidate();
	button5Off.invalidate();
	//application().gotoScreen2ScreenNoTransition();

}

