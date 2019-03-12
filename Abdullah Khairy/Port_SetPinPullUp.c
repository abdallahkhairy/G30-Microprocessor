#define PORTA      0x00000001 
#define PORTB      0x00000002
#define PORTC      0x00000004 
#define PORTD      0x00000008 
#define PORTE      0x00000010 
#define PORTF      0x00000020 

void Port_SetPinPullUp(uint8 port_index , uint8 pins_mask , uint8 enable){
	switch(port_index)
	{
		case PORTA:
			if(enable)
				GPIO_PORTA_PDR_R |= pins_mask;
			else 
				GPIO_PORTA_PDR_R &= ~pins_mask;
			break;
		case PORTB:
			if(enable)
				GPIO_PORTB_PDR_R |= pins_mask;
			else 
				GPIO_PORTB_PDR_R &= ~pins_mask;
			break;
		case PORTC:
			if(enable)
				GPIO_PORTC_PDR_R |= pins_mask;
			else 
				GPIO_PORTC_PDR_R &= ~pins_mask;
			break;		
		case PORTD:
			if(enable)
				GPIO_PORTD_PDR_R |= pins_mask;
			else 
				GPIO_PORTD_PDR_R &= ~pins_mask;
			break;		
		
		case PORTE:
			if(enable)
				GPIO_PORTE_PDR_R |= pins_mask;
			else 
				GPIO_PORTE_PDR_R &= ~pins_mask;
			break;		
		case PORTF:
			if(enable)
				GPIO_PORTF_PDR_R |= pins_mask;
			else 
				GPIO_PORTF_PDR_R &= ~pins_mask;
			break;		
	} 
}
