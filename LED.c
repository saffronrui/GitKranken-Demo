//This is LED control file//

#defien LED0	GPIOA_9
#define LED1 GPIOB_8

void LED_init(void)
{
	LED0 = 0;
	LED1 = 0;
}