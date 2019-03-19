
#include "STD_TYPES.h"
#include "APP.h"
#include "DIO.h"
#include "LCD.h"
#include "Delay.h"

	uint32_t Count=0;
	uint8 RESET;
	uint8 INCREASE;
	uint8 DECREASE;
	uint8 HUN,TEN,UNI;
	
void CounterTO999(void)
{
	
	PortInit(GPIO_PORTA);
	PortInit(GPIO_PORTB);
	PortInit(GPIO_PORTE);
	Port_SetPinDirection(GPIO_PORTB,0xFF,PORT_PIN_OUT);
	Port_SetPinDirection(GPIO_PORTA,0x1C,PORT_PIN_OUT);
	Port_SetPinDirection(GPIO_PORTE,0x0E,PORT_PIN_IN);
	Port_SetPinPullUp (GPIO_PORTB,0xFF,STD_HIGH);
	Port_SetPinPullUp	(GPIO_PORTA,0x1C,STD_HIGH);
	Port_SetPinPullUp (GPIO_PORTE,0x0E,STD_HIGH);
	LCD_Init();
	
	
	
	LCDdata('0');
	LCDdata('0');
	LCDdata('0');
	
	while (1)
	{
		RESET = (DIO_ReadPort(GPIO_PORTE,PIN_3) >> 3 ) & 1;
		INCREASE = (DIO_ReadPort(GPIO_PORTE,PIN_1) >> 1 ) & 1;
		DECREASE = ((DIO_ReadPort(GPIO_PORTE,PIN_2) >> 2 ) & 1 );
		
		
		if (RESET == 0)
		{
			while(RESET == 0)
			{
				RESET = (DIO_ReadPort(GPIO_PORTE,PIN_3) >> 3 ) & 1;
			}
			Count=0;
			LCDcommand(0x01);
			Delay_Ms(1);
			LCDdata('0');
			LCDdata('0');
			LCDdata('0');
		}
		else if (INCREASE == 0)
		{	
			Count++;
			UNI = (Count % 10) + '0';
			TEN = ((Count / 10) % 10) + '0';
			HUN = ((Count / 100) == 10 )? Count = 0, (Count / 100) + '0' : (Count / 100) + '0';
			LCDcommand(0x01);
			Delay_Ms(1);
			LCDdata(HUN);
			LCDdata(TEN);
			LCDdata(UNI);
			Delay_Ms(300);
		}
		else if (DECREASE == 0)
		{
			if (Count > 0)
			{
				Count--;
				UNI = (Count % 10) + '0';
				TEN = ((Count / 10) % 10) + '0';
				HUN = (Count / 100) + '0';
				LCDcommand(0x01);
				Delay_Ms(1);
				LCDdata(HUN);
				LCDdata(TEN);
				LCDdata(UNI);
				while(DECREASE == 0)
				{
					DECREASE = ((DIO_ReadPort(GPIO_PORTE,PIN_2) >> 2 ) & 1 );
				}
			}
			
		}
		
	}
}