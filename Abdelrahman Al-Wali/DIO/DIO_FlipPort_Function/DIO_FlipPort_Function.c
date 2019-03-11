


void DIO_FlipPort ( uint8 port_index , uint8 pins_mask )
{
	switch(port_index)
	{
		case GPIO_PORT_A
		GPIO_PORTA_DATA_R ^= pins_mask;
		break;
		case GPIO_PORT_B
		GPIO_PORTB_DATA_R ^= pins_mask;
		break;
		case GPIO_PORT_C
		GPIO_PORTC_DATA_R ^= pins_mask;
		break;
		case GPIO_PORT_D
		GPIO_PORTD_DATA_R ^= pins_mask;
		break;
		case GPIO_PORT_E
		GPIO_PORTE_DATA_R ^= pins_mask;
		break;
		case GPIO_PORT_F
		GPIO_PORTF_DATA_R ^= pins_mask;
		break;
	}
}
