/* see uart.c */

#ifndef UART_H
#define UART_H

#include "type.h"

u32 platform_uart_setup( unsigned id, u32 baud, int databits, int parity, int stopbits );
void platform_s_uart_send( unsigned id, u8 data );

#endif
