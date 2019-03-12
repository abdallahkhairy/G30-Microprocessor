
  Dio_LevelType IncVal = STD_HIGH;
	Dio_LevelType CurrentDecVal = STD_HIGH,PrevDecVal = STD_HIGH; 
	Dio_LevelType Reset = STD_HIGH;
	while(1)
	{
	//**************************************************************************
		IncVal = DIO_ReadPort(GPIO_PORTA,PA1);                             //while pressing
		while(IncVal == STD_LOW)                        
		{
			IncVal = DIO_ReadPort(GPIO_PORTA,PA1);
			delay 0.2 sec ;
		    //DO OPERATION
	
			
		}
	//**************************************************************************
		CurrentDecVal = DIO_ReadPort(GPIO_PORTA,PA2);                      //On press event
		if(CurrentDecVal == STD_LOW && PrevDecVal == STD_HIGH)
		{
			//DO OPERATION
		}
		PrevDecVal = CurrentDecVal;
	//**************************************************************************
		Reset = DIO_ReadPort(GPIO_PORTA,PA3);                             //On release event
		while(Reset == STD_LOW)                                 
		{
			Reset = DIO_ReadPort(GPIO_PORTA,PA3);
			if(Reset == STD_HIGH)
			{
				//DO OPERATION
			}
		}
	//***************************************************************************	
	}
