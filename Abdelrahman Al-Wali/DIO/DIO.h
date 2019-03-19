#ifndef DIO_INT_H_
#define DIO_INT_H_
#include "STD_TYPES.h"
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


#define PIN_0			0x01
#define PIN_1			0x02
#define PIN_2			0x04
#define PIN_3			0x08
#define PIN_4			0x10
#define PIN_5			0x20
#define PIN_6			0x40
#define PIN_7			0x80


#define GPIO_PORTA			0x01
#define GPIO_PORTB			0x02
#define GPIO_PORTC			0x04
#define GPIO_PORTD			0x08
#define GPIO_PORTE			0x10
#define GPIO_PORTF			0x20

void PortInit(uint8 port_index );
void Port_SetPinDirection(uint8 port_index, uint8 pins_mask, Port_PinDirectionType pins_direction);
void Port_SetPinPullUp(uint8 port_index , uint8 pins_mask , uint8 enable);
void Port_SetPinPullDown ( uint8 port_index , uint8 pins_mask , uint8 enable );
void DIO_WritePort(uint8 port_index,uint8 pins_mask, Dio_LevelType pins_level);
uint8 DIO_ReadPort(uint8 port_index,uint8 pins_mask);
void DIO_FlipPort ( uint8 port_index , uint8 pins_mask );

#endif /* DIO_INT_H_ */
