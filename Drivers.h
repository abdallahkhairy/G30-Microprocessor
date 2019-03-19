typedef unsigned int uint32_t;
typedef unsigned char uint8;
void PortInit(uint8 port_index );
// To Initlize The Selected Port By Enabling The clk And make It Digital And Unlock it
void Port_SetPinPullUp(uint8 port_index , uint8 pins_mask , uint8 enable);
// To Make an Intrnal Resistance to Make it High When no Press and Low When Press
#include"Switches.h"
// switches driver

