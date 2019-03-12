

void Port_SetPinPullDown ( uint8 port_index , uint8 pins_mask , uint8 enable )
{
	switch(port_index)
	{
	case GPIO_PORT_A:
	(enable==0)? : GPIO_PORTA_PDR_R &= ~pins_mask : GPIO_PORTA_PDR_R |= pins_mask;
	break;
	
	case GPIO_PORT_B:
	(enable==0)? : GPIO_PORTB_PDR_R &= ~pins_mask : GPIO_PORTB_PDR_R |= pins_mask;
	break;
	
	case GPIO_PORT_C:
	(enable==0)? : GPIO_PORTC_PDR_R &= ~pins_mask : GPIO_PORTC_PDR_R |= pins_mask;
	break;
	
	case GPIO_PORT_D:
	(enable==0)? : GPIO_PORTD_PDR_R &= ~pins_mask : GPIO_PORTD_PDR_R |= pins_mask;
	break;
	
	case GPIO_PORT_E:
	(enable==0)? : GPIO_PORTE_PDR_R &= ~pins_mask : GPIO_PORTE_PDR_R |= pins_mask;
	break;
	
	case GPIO_PORT_F:
	(enable==0)? : GPIO_PORTF_PDR_R &= ~pins_mask : GPIO_PORTF_PDR_R |= pins_mask;
	break;
	}	
}
