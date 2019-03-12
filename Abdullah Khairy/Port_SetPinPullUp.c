

void Port_SetPinPullUp(uint8 port_index , uint8 pins_mask , uint8 enable){
	switch(port_index)
	{
		case GPIO_PORT_A:
			if(enable)
				GPIO_PORTA_PUR_R |= pins_mask;
			else 
				GPIO_PORTA_PUR_R &= ~pins_mask;
			break;
		case GPIO_PORT_B:
			if(enable)
				GPIO_PORTB_PUR_R |= pins_mask;
			else 
				GPIO_PORTB_PUR_R &= ~pins_mask;
			break;
		case GPIO_PORT_C:
			if(enable)
				GPIO_PORTC_PUR_R |= pins_mask;
			else 
				GPIO_PORTC_PUR_R &= ~pins_mask;
			break;		
		case GPIO_PORT_D:
			if(enable)
				GPIO_PORTD_PUR_R |= pins_mask;
			else 
				GPIO_PORTD_PUR_R &= ~pins_mask;
			break;		
		case GPIO_PORT_E:
			if(enable)
				GPIO_PORTE_PUR_R |= pins_mask;
			else 
				GPIO_PORTE_PUR_R &= ~pins_mask;
			break;		
		case GPIO_PORT_F:
			if(enable)
				GPIO_PORTF_PUR_R |= pins_mask;
			else 
				GPIO_PORTF_PUR_R &= ~pins_mask;
			break;		
	} 
}
