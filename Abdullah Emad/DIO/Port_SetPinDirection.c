void Port_SetPinDirection(unit8 port_index, unit8 pins_mask, Port_PinDirectionType pins_direction)
{

	switch (port_index)
	{

		case GPIO_PORTA:
			if (Port_PinDirectionType)
			{
				GPIO_PORTA_DIR_R |= pins_mask;
			}
			else
			{
				GPIO_PORTA_DIR_R &= ~pins_mask;
			}
			break;

		case GPIO_PORTB:
			if (Port_PinDirectionType)
			{
				GPIO_PORTB_DIR_R |= pins_mask;
			}
			else
			{
				GPIO_PORTB_DIR_R &= ~pins_mask;
			}
			break;

		case GPIO_PORTC:
			if (Port_PinDirectionType)
			{
				GPIO_PORTC_DIR_R |= pins_mask;
			}
			else
			{
				GPIO_PORTC_DIR_R &= ~pins_mask;
			}
			break;
		case GPIO_PORTD:
			if (Port_PinDirectionType)
			{
				GPIO_PORTD_DIR_R |= pins_mask;
			}
			else
			{
				GPIO_PORTD_DIR_R &= ~pins_mask;
			}
			break;
		case GPIO_PORTE:
			if (Port_PinDirectionType)
			{
				GPIO_PORTE_DIR_R |= pins_mask;
			}
			else
			{
				GPIO_PORTE_DIR_R &= ~pins_mask;
			}
			break;
		case GPIO_PORTF:
			if (Port_PinDirectionType)
			{
				GPIO_PORTF_DIR_R |= pins_mask;
			}
			else
			{
				GPIO_PORTF_DIR_R &= ~pins_mask;
			}
			break;
		}
}
