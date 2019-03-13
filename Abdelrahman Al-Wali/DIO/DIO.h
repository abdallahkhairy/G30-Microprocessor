#ifndef DIO_INT_H_
#define DIO_INT_H_

typedef enum
{
	
PORT_PIN_IN=0,
	
PORT_PIN_OUT

}Port_PinDirectionType;

typedef enum 
{
STD_LOW=0,
STD_HIGH

}Dio_LevelType;


#define PIN_0			0
#define PIN_1			1
#define PIN_2			2
#define PIN_3			3
#define PIN_4			4
#define PIN_5			5
#define PIN_6			6
#define PIN_7			7


#define GPIO_PORTA			0
#define GPIO_PORTB			1
#define GPIO_PORTC			2
#define GPIO_PORTD			3
#define GPIO_PORTE			4
#define GPIO_PORTF			5

void PortInit(uint8 port_index );
void Port_SetPinDirection(unit8 port_index, unit8 pins_mask, Port_PinDirectionType pins_direction);
void Port_SetPinPullUp(uint8 port_index , uint8 pins_mask , uint8 enable);
void Port_SetPinPullDown ( uint8 port_index , uint8 pins_mask , uint8 enable );
void DIO_WritePort(unit8 port_index,unit8 pins_mask, Dio_LevelType pins_level);
uint8 DIO_ReadPort(uint8 port_index,pins_mask);
void DIO_FlipPort ( uint8 port_index , uint8 pins_mask );

#endif /* DIO_INT_H_ */