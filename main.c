//*** This is a c file ***///

#include"stdio.h"

int  main(void)
{
	LED_init();
	return  0;

}

void LED_init(void)
{
	LED0 = 0;
	LED1 = 1;
}