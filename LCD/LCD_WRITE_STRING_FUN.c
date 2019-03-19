

void LCD_writeString(u8 *ptr, u8 xpos, u8 ypos)
{
	/*cmd to move cursor*/
	DIO_WritePort(LCD_CONTROL_PINS_PORT,RS,STD_LOW);
	DIO_WritePort(LCD_CONTROL_PINS_PORT,RW,STD_LOW);
	DIO_WritePort(LCD_PORT,(0x80 | ypos<<6 | xpos),STD_HIGH);
	DIO_WritePort(LCD_PORT,~(0x80 | ypos<<6 | xpos),STD_LOW);
	Delay_Ms(1);
	while(*ptr !='\0')
	{
		DIO_WritePort(LCD_CONTROL_PINS_PORT,RS,STD_HIGH);
		DIO_WritePort(LCD_CONTROL_PINS_PORT,RW,STD_LOW);
		DIO_WritePort(LCD_PORT,*ptr,STD_HIGH);
		DIO_WritePort(LCD_PORT,~*ptr,STD_LOW);
		ptr++;
	}
	/* set ENABLE high */
	DIO_WritePort(LCD_CONTROL_PINS_PORT,E,STD_HIGH);;
	/* Delay 1 ms */
	Delay_Ms(1);
	/*set Enable LOW */
	DIO_WritePort(LCD_CONTROL_PINS_PORT,E,STD_LOW);
}