/**
 * Serial console interface
 *
 * Uses UART0 and is called by the `stdstub`
 */

#include "sercon.h"
#include <avr/io.h>
#include <stdio.h>
#define F_CPU 16000000  /* FIXME: This needs a better place */
#define BAUD 115200
/* We can be a bit tolerant of errors */
#define BAUD_TOL 3
#include <util/setbaud.h>

static int stdin_getc(FILE* stream) {
    return sercon_getc();
}

static int stdout_putc(char c, FILE* stream) {
    sercon_putc(c);
    return 0;
}

void sercon_init() {
    UBRR0H = UBRRH_VALUE;
    UBRR0L = UBRRL_VALUE;

#if USE_2X
    /* Set U2X to double the speed */
    UCSR0A |= (1 << U2X0);
#else
    UCSR0A = 0;
#endif

    UCSR0B = (1 << RXEN0) | (1 << TXEN0);
    UCSR0C = (1 << UCSZ00) | (1 << UCSZ01);

    // currently leaks the allocated memory
    fdevopen(stdout_putc, stdin_getc);
}

void sercon_putc(char c) {
    /* wait until the data register is empty */
    while (!(UCSR0A & (1 << UDRE0)));
    UDR0 = c;
}

char sercon_getc() {
    /* wait until RX complete bit is set */
    while (!(UCSR0A & (1 << RXC0)));
    return UDR0;
}
