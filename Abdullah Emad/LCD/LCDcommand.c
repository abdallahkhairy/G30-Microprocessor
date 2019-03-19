void LCDcommand(uint8 cmd){
	DIO_WritePort(LCD_CONTROL_PINS_PORT,RS,STD_LOW);
	LCD_excute(cmd);
}
