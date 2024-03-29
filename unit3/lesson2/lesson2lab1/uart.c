#include "uart.h"
#define UART0DR *((volatile unsigned int*)((unsigned int*)0x101f1000))

void send_uart (unsigned char *p_tx_uart)
{
	while(*p_tx_uart != '\0')
	{
		UART0DR	= *p_tx_uart;
		p_tx_uart++;
	}
}