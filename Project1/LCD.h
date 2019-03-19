

#ifndef _LCD_H_
#define _LCD_H_


void LCD_Init();
void LCDcommand(uint8 cmd);
void LCDdata(uint8 data);
static void LCD_excute(uint8 u8ValueCpy);


#endif