uint8 DIO_ReadPort(uint8 port_index,pins_mask){
switch(port_index)
 {
	case GPIO_PORTA :
	             return GIPO_PORTA_DATA_R & pins_mask ;
	             break;
	case  GPIO_PORTB :
	        	
	        	  return GIPO_PORTB_DATA_R & pins_mask ;
	        	  break;
	case  GPIO_PORTC :
	        	
			return GIPO_PORTC_DATA_R & pins_mask ;
	        	break;
	case  GPIO_PORTD :
	        	
	        	 return GIPO_PORTD_DATA_R & pins_mask) ;
	        	break;
	case  GPIO_PORTE :
	        	
	        	 return GIPO_PORTE_DATA_R & pins_mask;
	        	break;					
	case  GPIO_PORTF :
	        	
	        	 return GIPO_PORTF_DATA_R & pins_mask;
	        	break;					
 }
}
