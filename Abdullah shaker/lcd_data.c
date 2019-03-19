
#define CONT_PORT        GPIO_PORTB

#define CONT_PIN_MASK    0x07


#define DATA_PORT        GPIO_PORTD




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