void lcd_FunctionReset(void)
{
	 /*RS*/
	DIO_vidSetpinVAL(LCD_CONTROL_PINS_PORT,RS,STD_HIGH);
	 /*RW*/
	DIO_vidSetpinVAL(LCD_CONTROL_PINS_PORT,RW,STD_LOW);

	DIO_vidSetPortVAL(LCD_PORT,0x30);
	/*E*/
	DIO_vidSetpinVAL((LCD_CONTROL_PINS_PORT,E,STD_LOW);
		_delay_ms(10);
	DIO_vidSetpinVAL(LCD_CONTROL_PINS_PORT,E,STD_LOW);
}
