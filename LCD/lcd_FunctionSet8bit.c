void lcd_FunctionSet8bit(void)
{  /*RS*/
	DIO_vidSetpinVAL(LCD_RSPort ,LCD_RSpin,HIGH);
	 /*RW*/
	DIO_vidSetpinVAL(LCD_RwPort,LCD_Rwpin,LOW);
	DIO_vidSetPortVAL(LCD_DATAPort,0x38);
	DIO_vidSetpinVAL(LCD_EPort,LCD_Epin, HIGH);
		_delay_ms(10);
	DIO_vidSetpinVAL(LCD_EPort,LCD_Epin, LOW);
}
