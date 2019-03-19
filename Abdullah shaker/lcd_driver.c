


#define CONT_PORT        GPIO_PORTB

#define CONT_PIN_MASK    0x07

/* just to remmeber 

#define RS_PIN           PIN_0	
#define RW_PIN           PIN_1
#define EN_PIN           PIN_2
*/

#define DATA_PORT        GPIO_PORTD





void LCD_CMD(u8 cmd)
{
	CONT_PIN_MASK & =~ 0x03 ; //we dont need EN pin 
	
	DIO_WritePort(CONT_PORT,CONT_PIN_MASK,STD_LOW); //reset RW,RS pin
	
	DIO_WritePort(CONT_PORT,cmd,STD_HIGH); //write CMD in the port
	
	CONT_PIN_MASK | = 0x04 ; //choose EN pin 
	
	DIO_WritePort(CONT_PORT,CONT_PIN_MASK,STD_HIGH); // set EN pin
	
	//delay 100us
	DIO_WritePort(CONT_PORT,CONT_PIN_MASK,STD_LOW);// reset EN pin
	
	
	
	
	
}

void LCD_INIT(void)
{
	LCD_CMD(0x38);
	
	//delay 1ms
	LCD_CMD(0x0E);
	//delay 1ms

	LCD_CMD(0x01);
	//delay 2ms

	
	
	
}



void LCD_DATA(u8 data)
{
	CONT_PIN_MASK & =~ 0x01 ; //choose RS pin 
	
	DIO_WritePort(CONT_PORT,CONT_PIN_MASK,STD_HIGH);// set RS pin
	
	 //to choose RW we need to reset all 
	
	CONT_PIN_MASK & = ~ 0x00 ; 
	
	CONT_PIN_MASK | = 0x02 ;  //choose RW only
	
	DIO_WritePort(CONT_PORT,CONT_PIN_MASK,STD_HIGH);// reset RW pin
	
    DIO_WritePort(DATA_PORT,data,STD_HIGH);// write DATA in the port
	
	
	
	
	DIO_WritePort(CONT_PORT,CONT_PIN_MASK,STD_HIGH); // set EN pin
	
	//delay 100us
	DIO_WritePort(CONT_PORT,CONT_PIN_MASK,STD_LOW);// reset EN pin
		
}
void LCD_CLR(void)
{
	//reset all
	CONT_PIN_MASK & = ~ 0x00 ; 
	
	LCD_CMD(0x01);
	//	_delay_ms(1.5);
	
	
}