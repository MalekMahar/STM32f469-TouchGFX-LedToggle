#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>
#include <stdint.h>

extern "C"{
extern uint8_t LED_TFT;
extern void Toggle_LEDred(void);
}

Model::Model() : modelListener(0)
{

}

void Model::tick()
{
#ifndef SIMULATOR
	if ((LED_TFT) == 1)
	{
		modelListener->userButton();
		LED_TFT = 0;
	}
#endif /*SIMULATOR*/

}

void Model::HW_LED_red()
{
	Toggle_LEDred();
}
