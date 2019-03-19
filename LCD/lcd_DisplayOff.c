
void lcd_DisplayOff(void){
	/* set RS LOW */
	DIO_WritePort(LCD_CONTROL_PINS_PORT,RS,STD_LOW);
  	/* set RW LOW */
	DIO_WritePort(LCD_CONTROL_PINS_PORT,RW,STD_LOW);
  /*SEND DISPLAY OFF CMD */
	DIO_WritePort(LCD_PORT,0x08,STD_HIGH);
	DIO_WritePort(LCD_PORT,0xFE,STD_LOW);
	/* set ENABLE high */
	DIO_WritePort(LCD_CONTROL_PINS_PORT,E,STD_HIGH);;
	/* Delay 1 ms */
	Delay_Ms(1);
	/*set Enable LOW */
	DIO_WritePort(LCD_CONTROL_PINS_PORT,E,STD_LOW);
	Delay_Ms(1)
  }
  
