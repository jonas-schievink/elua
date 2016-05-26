#ifndef _SERCON_H
#define _SERCON_H

/**
 * Initializes UART 0 and sets up stdin, stdout and stderr to use it
 */
void sercon_init();

/**
 * Write a byte to the serial console
 */
void sercon_putc(char c);

/**
 * Receive a byte from the serial console. Blocks until a byte is received.
 */
char sercon_getc();

#endif
