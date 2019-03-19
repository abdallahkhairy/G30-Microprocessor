void lcd_DisplayOn(void)

{
	 /*RS*/
	DIO_vidSetpinVAL(LCD_RSPort ,LCD_RSpin,LOW);
	 /*RW*/
	DIO_vidSetpinVAL(LCD_RwPort,LCD_Rwpin,LOW);

	DIO_vidSetPortVAL(LCD_DATAPort,0x0C);
	/*E*/
	DIO_vidSetpinVAL(LCD_EPort,LCD_Epin, HIGH);
		_delay_ms(10);
	DIO_vidSetpinVAL(LCD_EPort,LCD_Epin, LOW);
}
