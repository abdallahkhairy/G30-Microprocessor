




void Port_SetPinPullDown (uint8 port_index,uint8 pins_mask,uint8 enable)
{
	
	uint8 DATA =!pins_mask ;
	switch(port_index)
	
	case 0:
	
	(enable==0)?:GPIO_PORTA_DATA_R &= DATA:GPIO_PORTF_DATA_R |= pins_mask;
	break;
	
	case 1:
	(enable==0)?:GPIO_PORTB_DATA_R &= DATA:GPIO_PORTB_DATA_R |= pins_mask;
	break;
	
	case 2:
	(enable==0)?:GPIO_PORTC_DATA_R &= DATA:GPIO_PORTC_DATA_R |= pins_mask;
	break;
	
	case 3:
	(enable==0)?:GPIO_PORTD_DATA_R &= DATA:GPIO_PORTD_DATA_R |= pins_mask;
	break;
	
	case 4:
	(enable==0)?:GPIO_PORTE_DATA_R &= DATA:GPIO_PORTE_DATA_R |= pins_mask;
	break;
	
	case 4:
	(enable==0)?:GPIO_PORTF_DATA_R &= DATA:GPIO_PORTF_DATA_R |= pins_mask;
	break;
			
		
	
	
}