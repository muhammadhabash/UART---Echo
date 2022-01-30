#include "MCAL/UART/UART_interface.h"
#include <string.h>

int main(void){
	
	uint8_t u8_str[20];
	UART_init();
	while (1) {
		
		UART_receiveString('\r',u8_str,20);
		UART_sendString(u8_str);
		UART_transmit('\r');
			
    }
}