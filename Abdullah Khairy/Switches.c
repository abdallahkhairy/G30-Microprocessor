#define PORTA      0x00000001 
#define PORTB      0x00000002
#define PORTC      0x00000004 
#define PORTD      0x00000008 
#define PORTE      0x00000010 
#define PORTF      0x00000020  


typedef enum
{
	
STD_LOW,
	
STD_HIGH

}Dio_LevelType;  


  Dio_LevelType IncVal = STD_HIGH;
	Dio_LevelType CurrentDecVal = STD_HIGH,PrevDecVal = STD_HIGH; 
	Dio_LevelType Reset = STD_HIGH;
	while(1)
	{
	//**************************************************************************
		IncVal = DIO_ReadPort(PORTA,PA1);                             //while pressing
		while(IncVal == STD_LOW)                        
		{
			IncVal = DIO_ReadPort(PORTA,PA1);
			delay 0.2 sec ;
		    //DO OPERATION
	
			
		}
	//**************************************************************************
		CurrentDecVal = DIO_ReadPort(PORTA,PA1);                      //On press event
		if(CurrentDecVal == STD_LOW && PrevDecVal == STD_HIGH)
		{
			//DO OPERATION
		}
		PrevDecVal = CurrentDecVal;
	//**************************************************************************
		Reset = DIO_ReadPort(PORTA,PA2);                             //On release event
		while(Reset == STD_LOW)                                 
		{
			Reset = DIO_ReadPort(PORTA,PA2);
			if(Reset == STD_HIGH)
			{
				//DO OPERATION
			}	
	//***************************************************************************
    	}	
	}
