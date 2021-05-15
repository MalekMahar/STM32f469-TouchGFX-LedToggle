#include <gui/screen3_screen/Screen3View.hpp>

Screen3View::Screen3View()
{

}

void Screen3View::setupScreen()
{
    Screen3ViewBase::setupScreen();
}

void Screen3View::tearDownScreen()
{
    Screen3ViewBase::tearDownScreen();
}

void Screen3View::toggleRedLed()
{
	if(redLedON.isVisible())
	{
		redLedON.setVisible(false);
	}
	else
	{
		redLedON.setVisible(true);
	}

	redLedON.invalidate();
	presenter->swB_LED_red();
}
