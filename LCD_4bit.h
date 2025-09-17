#include<reg51.h>

#define LCD_Port  P2 //LCD_Port = P1

sbit RS = P0^0;  //P0.0 = RS
sbit RW = P0^1;  //P0.1 = RW
sbit EN = P0^2;  // P0.2 = Enable



void LCD_Initialization(); //Forward Declaration for LCD_Initialization
void LCD_Cmd(char ); //Forward Declaration for LCD_Command
void LCD_Data(char) ; //Forward Declaration for LCD_Data
void LCD_String(char *); // Forward Declaration for LCD_String