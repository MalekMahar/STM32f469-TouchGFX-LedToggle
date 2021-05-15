#include <gui/screen2_screen/Screen2View.hpp>

Screen2View::Screen2View()
{

}

void Screen2View::setupScreen()
{
    Screen2ViewBase::setupScreen();
}

void Screen2View::tearDownScreen()
{
    Screen2ViewBase::tearDownScreen();
}

void Screen2View::toggleSwLed()
{
	if(blueLedON.isVisible())
	{
		blueLedON.setVisible(false);
		blueLedOFF.setVisible(true);
	}
	else
	{
		blueLedON.setVisible(true);
		blueLedOFF.setVisible(false);
	}

	blueLedON.invalidate();
	blueLedOFF.invalidate();

}
