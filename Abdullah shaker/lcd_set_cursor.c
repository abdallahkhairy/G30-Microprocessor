void LCD_set_cursor(uint8 xpos, uint8 ypos)
{
	/* you just use the form to make command that shift cursor */
	LCD_cmd((0x80 | ypos<<6 | xpos));

	
}