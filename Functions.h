/************************ Abdullah Khairy ************************/
typedef unsigned int uint32_t; // Using uint32_t Instead Of int
typedef unsigned char uint8; // Using uint8 Instead Of char
void PortInit(uint8 port_index );// To Initlize The Selected Port By Enabling The clk And make It Digital And Unlock it
void Port_SetPinPullUp(uint8 port_index , uint8 pins_mask , uint8 enable);// To Make an Intrnal Resistance to Make it High When no Press and Low When Press
#include"Switches.h"// switches driver
void lcd_DisplayOn(void);// Wake Up The LCD
void Delay_Us(uint32_t Num); // to make some delay in milliseconds but it not very accurate
void lcd_FunctionReset(void);// Back it To The Defult Setting
void LCD_excute(uint8 u8ValueCpy); // Prints at Screen
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

/************************ abdallah fathy **************************/
 uint8 DIO_ReadPort(uint8 port_index,pins_mask) // to read the input from selected pins in a port depend on mask recqieved
 void lcd_DisplayOff(void);// turn off The LCD
void lcd_Entrymode(void);//to be ready to write on lcd 
/************************ abdallah fathy ***************************/


