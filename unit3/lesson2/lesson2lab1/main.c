#include "uart.h"

unsigned char thestring[32]="learn_in_deapth:ahmed_salah";

void main()
{
	send_uart(thestring);
}