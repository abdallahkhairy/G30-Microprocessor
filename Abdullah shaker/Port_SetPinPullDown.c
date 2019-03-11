

void Port_SetPinPullDown ( uint8 port_index , uint8 pins_mask , uint8 enable )
{
	switch(port_index)
	{
	case 0:
	(enable==0)? : GPIO_PORTA_PDR_R &= ~pins_mask : GPIO_PORTA_PDR_R |= pins_mask;
	break;
	
	case 1:
	(enable==0)? : GPIO_PORTA_PDR_R &= ~pins_mask : GPIO_PORTB_PDR_R |= pins_mask;
	break;
	
	case 2:
	(enable==0)? : GPIO_PORTA_PDR_R &= ~pins_mask : GPIO_PORTC_PDR_R |= pins_mask;
	break;
	
	case 3:
	(enable==0)? : GPIO_PORTA_PDR_R &= ~pins_mask : GPIO_PORTD_PDR_R |= pins_mask;
	break;
	
	case 4:
	(enable==0)? : GPIO_PORTA_PDR_R &= ~pins_mask : GPIO_PORTE_PDR_R |= pins_mask;
	break;
	
	case 5:
	(enable==0)? : GPIO_PORTA_PDR_R &= ~pins_mask : GPIO_PORTF_PDR_R |= pins_mask;
	break;
	}	
}
