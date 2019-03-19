
#include "STD_TYPES.h"
#include "DIO.h"
#include "SevSegments.h"
#include "SevSegments_config.h"



void SevSegment1_DisplayNo( uint8 No )
{
	uint8 DisplayOn;
	uint8 DisplayOff;
	switch (No)
	{
		case 0:
		DisplayOn  = 0x0;
		DisplayOff = 0xF;
		break;
		case 1:
		DisplayOn  = 0x1;
		DisplayOff = 0xE;
		break;
		case 2:
		DisplayOn  = 0x2;
		DisplayOff = 0xD;
		break;
		case 3:
		DisplayOn  = 0x3;
		DisplayOff = 0xC;
		break;
		case 4:
		DisplayOn  = 0x4;
		DisplayOff = 0xB;
		break;
		case 5:
		DisplayOn  = 0x5;
		DisplayOff = 0xA;
		break;
		case 6:
		DisplayOn  = 0x6;
		DisplayOff = 0x9;
		break;
		case 7:
		DisplayOn  = 0x7;
		DisplayOff = 0x8;
		break;
		case 8:
		DisplayOn  = 0x8;
		DisplayOff = 0x7;
		break;
		case 9:
		DisplayOn  = 0x9;
		DisplayOff = 0x6;
		break;
		default :
		DisplayOn  = 0x0;
		DisplayOff = 0xF;
		break;
	}
	DIO_WritePort(SEVSEGMENTS1_PORT,DisplayOn,STD_HIGH);
	DIO_WritePort(SEVSEGMENTS1_PORT,DisplayOff,STD_LOW);
}
void SevSegment2_DisplayNo( uint8 No )
{
	uint8 DisplayOn;
	uint8 DisplayOff;
	switch (No)
	{
		case 0:
		DisplayOn  = 0x00;
		DisplayOff = 0xF0;
		break;
		case 1:
		DisplayOn  = 0x10;
		DisplayOff = 0xE0;
		break;
		case 2:
		DisplayOn  = 0x20;
		DisplayOff = 0xD0;
		break;
		case 3:
		DisplayOn  = 0x30;
		DisplayOff = 0xC0;
		break;
		case 4:
		DisplayOn  = 0x40;
		DisplayOff = 0xB0;
		break;
		case 5:
		DisplayOn  = 0x50;
		DisplayOff = 0xA0;
		break;
		case 6:
		DisplayOn  = 0x60;
		DisplayOff = 0x90;
		break;
		case 7:
		DisplayOn  = 0x70;
		DisplayOff = 0x80;
		break;
		case 8:
		DisplayOn  = 0x80;
		DisplayOff = 0x70;
		break;
		case 9:
		DisplayOn  = 0x90;
		DisplayOff = 0x60;
		break;
		default :
		DisplayOn  = 0x00;
		DisplayOff = 0xF0;
		break;
	}
	DIO_WritePort(SEVSEGMENTS2_PORT,DisplayOn,STD_HIGH);
	DIO_WritePort(SEVSEGMENTS2_PORT,DisplayOff,STD_LOW);
}
void SevSegment3_DisplayNo( uint8 No )
{
	uint8 DisplayOn;
	uint8 DisplayOff;
	switch (No)
	{
		case 0:
		DisplayOn  = 0x00;
		DisplayOff = 0x3C;
		break;
		case 1:
		DisplayOn  = 0x04;
		DisplayOff = 0x38;
		break;
		case 2:
		DisplayOn  = 0x08;
		DisplayOff = 0x34;
		break;
		case 3:
		DisplayOn  = 0x0C;
		DisplayOff = 0xC0;
		break;
		case 4:
		DisplayOn  = 0x10;
		DisplayOff = 0x2C;
		break;
		case 5:
		DisplayOn  = 0x14;
		DisplayOff = 0x28;
		break;
		case 6:
		DisplayOn  = 0x30;
		DisplayOff = 0x0C;
		break;
		case 7:
		DisplayOn  = 0x38;
		DisplayOff = 0x04;
		break;
		case 8:
		DisplayOn  = 0x20;
		DisplayOff = 0x1C;
		break;
		case 9:
		DisplayOn  = 0x24;
		DisplayOff = 0x18;
		break;
		default :
		DisplayOn  = 0x00;
		DisplayOff = 0x3C;
		break;
	}
	DIO_WritePort(SEVSEGMENTS3_PORT,DisplayOn,STD_HIGH);
	DIO_WritePort(SEVSEGMENTS3_PORT,DisplayOff,STD_LOW);
}
