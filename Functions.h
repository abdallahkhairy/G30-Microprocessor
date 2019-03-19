/************************ Abdullah Khairy ************************/
typedef unsigned int uint32_t;
typedef unsigned char uint8;
void PortInit(uint8 port_index );
// To Initlize The Selected Port By Enabling The clk And make It Digital And Unlock it
void Port_SetPinPullUp(uint8 port_index , uint8 pins_mask , uint8 enable);
// To Make an Intrnal Resistance to Make it High When no Press and Low When Press
#include"Switches.h"
// switches driver
void lcd_DisplayOn(void);
void Delay_Us(uint32_t Num); // to make some delay in milliseconds but it not very accurate
// Wake Up The LCD 
void lcd_FunctionReset(void)
 // Back it To The Defult Setting
 /********************* Abdullah Khairy ***************************/
 
 
/********************* Abdelrahman Al-Wali ************************/
void DIO_FlipPort ( uint8 port_index , uint8 pins_mask ); // to Toggle selected pins depend on mask recqieved
void SevSegment1_DisplayNo( uint8 No ); // to display certain number on seven segment 1
void SevSegment2_DisplayNo( uint8 No ); // to display certain number on seven segment 2
void SevSegment3_DisplayNo( uint8 No ); // to display certain number on seven segment 3
void Delay_Ms(uint32_t Num); // to make some delay in milliseconds but it not very accurate
void LCD_clear(); // to clear lcd 
void LCD_Home(); // when the new character is not visible on the display immediately. The user must call, one of the funtions lcd.home()or lcd.setCursor()after the character creation.
void LCD_writeString(u8 *ptr, u8 xpos, u8 ypos); // to write words on the lcd
void CounterTO999(void); // the application of counter by first method 
 /******************** Abdelrahman Al-Wali ***************************/

