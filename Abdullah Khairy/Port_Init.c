                              
                               
void PortInit(uint8 port_index ){
	SYSCTL_RCGCGPIO_R  |=port_index;
	while((SYSCTL_PRGPIO_R &=port_index)==0){};
	switch(port_index)
	{
		
		case GPIO_PORTA :
			GPIO_PORTA_LOCK_R = GPIO_LOCK_KEY; // to unlock the port
			GPIO_PORTA_CR_R =0XFF; // Commit Reg to choose which bit to unlock
			GPIO_PORTA_DEN_R |=0XFF; // Digtial enable
			GPIO_PORTA_AFSEL_R =0; // to choose to be I/O or No 
			GPIO_PORTA_PCTL_R =0; // if AFSEL enabled this reg tell us the alternative func
			GPIO_PORTA_AMSEL_R =0; // anlog mode select
			break;
		case GPIO_PORTB :
			GPIO_PORTB_LOCK_R = GPIO_LOCK_KEY;
			GPIO_PORTB_CR_R =0XFF;
			GPIO_PORTB_DEN_R |=0XFF;
			GPIO_PORTB_AFSEL_R =0;
			GPIO_PORTB_PCTL_R =0;
			GPIO_PORTB_AMSEL_R =0;	
			break;
		case GPIO_PORTD :
			GPIO_PORTD_LOCK_R = GPIO_LOCK_KEY;
			GPIO_PORTD_CR_R =0XFF;
			GPIO_PORTD_DEN_R |=0XFF;
			GPIO_PORTD_AFSEL_R =0;
			GPIO_PORTD_PCTL_R =0;
			GPIO_PORTD_AMSEL_R =0;	
			break;
		case GPIO_PORTC :
			GPIO_PORTC_LOCK_R = GPIO_LOCK_KEY;
			GPIO_PORTC_CR_R =0XFF;
			GPIO_PORTC_DEN_R |=0XFF;
			GPIO_PORTC_AFSEL_R =0;
			GPIO_PORTC_PCTL_R =0;
			GPIO_PORTC_AMSEL_R =0;	
			break;
		case GPIO_PORTE :
			GPIO_PORTE_LOCK_R = GPIO_LOCK_KEY;
			GPIO_PORTE_CR_R =0XFF;
			GPIO_PORTE_DEN_R |=0XFF;
			GPIO_PORTE_AFSEL_R =0;
			GPIO_PORTE_PCTL_R =0;
			GPIO_PORTE_AMSEL_R =0;	
			break;
		case GPIO_PORTF :
			GPIO_PORTF_LOCK_R = GPIO_LOCK_KEY; 
			GPIO_PORTF_CR_R =0XFF;
			GPIO_PORTF_DEN_R |=0XFF; 
			GPIO_PORTF_AFSEL_R =0;  
			GPIO_PORTF_PCTL_R =0;  
			GPIO_PORTF_AMSEL_R =0;	 
			break;
	}			
}
