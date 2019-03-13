void DIO_WritePort(unit8 port_index,unit8 pins_mask, Dio_LevelType pins_level)
{
	
	switch(port_index)
	{
		
		case GPIO_PORTA:
			
			if (pins_level)
				{
					GPIO_PORTA_DATA_R |= pins_mask;
				}
			else
				{
					GPIO_PORTA_DATA_R &= ~pins_mask;
				}
	
					break;		
						
		case GPIO_PORTB:
			
			if (pins_level)
				{
					GPIO_PORTB_DATA_R |= pins_mask;
				}
			else
				{
					GPIO_PORTB_DATA_R &= ~pins_mask;
				}
	
					break;
							
		case GPIO_PORTC:
			
			if (pins_level)
				{
					GPIO_PORTC_DATA_R |= pins_mask;
				}
			else
				{
					GPIO_PORTC_DATA_R &= ~pins_mask;
				}
	
					break;
						
		case GPIO_PORTD:
			
			if (pins_level)
				{
					GPIO_PORTD_DATA_R |= pins_mask;
				}
			else
				{
					GPIO_PORTD_DATA_R &= ~pins_mask;
				}
	
					break;
						
		case GPIO_PORTE:
			
			if (pins_level)
				{
					GPIO_PORTE_DATA_R |= pins_mask;
				}
			else
				{
					GPIO_PORTE_DATA_R &= ~pins_mask;
				}
	
					break;
				
		case GPIO_PORTF:
			
			if (pins_level)
				{
					GPIO_PORTF_DATA_R |= pins_mask;
				}
			else
				{
					GPIO_PORTF_DATA_R &= ~pins_mask;
				}
	
					break;
	}
}
