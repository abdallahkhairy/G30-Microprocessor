#include "DIO.h"
#include "SevSegments_config.h"
#include "SevSegments.h"


void SevSegment1_Enable()
{
	DIO_WritePort(SEVSEGMENTS1_COMMON_PIN_PORT,1 << SEVSEGMENTS1_COMMON_PIN,STD_HIGH);
}
void SevSegment2_Enable()
{
	DIO_WritePort(SEVSEGMENTS2_COMMON_PIN_PORT,1 << SEVSEGMENTS2_COMMON_PIN,STD_HIGH);
}
void SevSegment3_Enable()
{
	DIO_WritePort(SEVSEGMENTS3_COMMON_PIN_PORT,1 << SEVSEGMENTS3_COMMON_PIN,STD_HIGH);
}
void SevSegment1_Disable()
{
	DIO_WritePort(SEVSEGMENTS1_COMMON_PIN_PORT,1 << SEVSEGMENTS1_COMMON_PIN,STD_LOW);
}
void SevSegment2_Disable()
{
	DIO_WritePort(SEVSEGMENTS2_COMMON_PIN_PORT,1 << SEVSEGMENTS2_COMMON_PIN,STD_LOW);
}
void SevSegment3_Disable()
{
	DIO_WritePort(SEVSEGMENTS3_COMMON_PIN_PORT,1 << SEVSEGMENTS3_COMMON_PIN,STD_LOW);
}
void SevSegment1_DisplayNo( u8 No )
{
	u8 DisplayOn;
	u8 DisplayOff;
	switch (No)
	{
		case 0:
		DisplayOn  = 0b0111111;
		DisplayOff = 0b1000000;
		break;
		case 1:
		DisplayOn  = 0b0000110;
		DisplayOff = 0b1111001;
		break;
		case 2:
		DisplayOn  = 0b1011011;
		DisplayOff = 0b0100100;
		break;
		case 3:
		DisplayOn  = 0b1001111;
		DisplayOff = 0b0110000;
		break;
		case 4:
		DisplayOn  = 0b1100110;
		DisplayOff = 0b0011001;
		break;
		case 5:
		DisplayOn  = 0b1101101;
		DisplayOff = 0b0010010;
		break;
		case 6:
		DisplayOn  = 0b1111101;
		DisplayOff = 0b0000010;
		break;
		case 7:
		DisplayOn  = 0b0000111;
		DisplayOff = 0b1111000;
		break;
		case 8:
		DisplayOn  = 0b1111111;
		DisplayOff = 0b0000000;
		break;
		case 9:
		DisplayOn  = 0b1101111;
		DisplayOff = 0b0010000;
		break;
		default
		DisplayOn  = 0b0000000;
		DisplayOff = 0b0000000;
		break;
	}
	DIO_WritePort(SEVSEGMENTS1_ATTACHED_PORT,DisplayOn,STD_HIGH);
	DIO_WritePort(SEVSEGMENTS1_ATTACHED_PORT,DisplayOff,STD_LOW);
}
void SevSegment2_DisplayNo( u8 No )
{
	u8 DisplayOn;
	u8 DisplayOff;
	switch (No)
	{
		case 0:
		DisplayOn  = 0b0111111;
		DisplayOff = 0b1000000;
		break;
		case 1:
		DisplayOn  = 0b0000110;
		DisplayOff = 0b1111001;
		break;
		case 2:
		DisplayOn  = 0b1011011;
		DisplayOff = 0b0100100;
		break;
		case 3:
		DisplayOn  = 0b1001111;
		DisplayOff = 0b0110000;
		break;
		case 4:
		DisplayOn  = 0b1100110;
		DisplayOff = 0b0011001;
		break;
		case 5:
		DisplayOn  = 0b1101101;
		DisplayOff = 0b0010010;
		break;
		case 6:
		DisplayOn  = 0b1111101;
		DisplayOff = 0b0000010;
		break;
		case 7:
		DisplayOn  = 0b0000111;
		DisplayOff = 0b1111000;
		break;
		case 8:
		DisplayOn  = 0b1111111;
		DisplayOff = 0b0000000;
		break;
		case 9:
		DisplayOn  = 0b1101111;
		DisplayOff = 0b0010000;
		break;
		default
		DisplayOn  = 0b0000000;
		DisplayOff = 0b0000000;
		break;
	}
	DIO_WritePort(SEVSEGMENTS2_ATTACHED_PORT,DisplayOn,STD_HIGH);
	DIO_WritePort(SEVSEGMENTS2_ATTACHED_PORT,DisplayOff,STD_LOW);
}
void SevSegment3_DisplayNo( u8 No )
{
	u8 DisplayOn;
	u8 DisplayOff;
	switch (No)
	{
		case 0:
		DisplayOn  = 0b0111111;
		DisplayOff = 0b1000000;
		break;
		case 1:
		DisplayOn  = 0b0000110;
		DisplayOff = 0b1111001;
		break;
		case 2:
		DisplayOn  = 0b1011011;
		DisplayOff = 0b0100100;
		break;
		case 3:
		DisplayOn  = 0b1001111;
		DisplayOff = 0b0110000;
		break;
		case 4:
		DisplayOn  = 0b1100110;
		DisplayOff = 0b0011001;
		break;
		case 5:
		DisplayOn  = 0b1101101;
		DisplayOff = 0b0010010;
		break;
		case 6:
		DisplayOn  = 0b1111101;
		DisplayOff = 0b0000010;
		break;
		case 7:
		DisplayOn  = 0b0000111;
		DisplayOff = 0b1111000;
		break;
		case 8:
		DisplayOn  = 0b1111111;
		DisplayOff = 0b0000000;
		break;
		case 9:
		DisplayOn  = 0b1101111;
		DisplayOff = 0b0010000;
		break;
		default
		DisplayOn  = 0b0000000;
		DisplayOff = 0b0000000;
		break;
	}
	DIO_WritePort(SEVSEGMENTS3_ATTACHED_PORT,DisplayOn,STD_HIGH);
	DIO_WritePort(SEVSEGMENTS3_ATTACHED_PORT,DisplayOff,STD_LOW);
}