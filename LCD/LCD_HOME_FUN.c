
void LCD_Home()
{
	DIO_WritePort(LCD_CONTROL_PINS_PORT,RS,STD_LOW);
	DIO_WritePort(LCD_CONTROL_PINS_PORT,RW,STD_LOW);
	DIO_WritePort(LCD_PORT,0x02,STD_HIGH);
	DIO_WritePort(LCD_PORT,0xFE,STD_LOW);
	/* set ENABLE high */
	DIO_WritePort(LCD_CONTROL_PINS_PORT,E,STD_HIGH);;
	/* Delay 1 ms */
	Delay_Ms(1);
	/*set Enable LOW */
	DIO_WritePort(LCD_CONTROL_PINS_PORT,E,STD_LOW);
	Delay_Ms(1);
}