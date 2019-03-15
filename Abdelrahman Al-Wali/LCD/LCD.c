
#include "../../LIB/STD_TYPES.h"
#include "../../MCAL/DIO/DIO.h"
#include "LCD.h"
#include "LCD_Config.h"

void LCD_Init()
{
	DIO_WritePort(LCD_CONTROL_PINS_PORT,PIN_E, STD_HIGH);
	
}

void LCD_Clear()
{
	DIO_WritePort(LCD_CONTROL_PINS_PORT,PIN_RS | PIN_RW, STD_LOW);
	DIO_WritePort(LCD_PORT,0x01, STD_HIGH);
	DIO_WritePort(LCD_PORT,0xFE, STD_LOW);
	
}