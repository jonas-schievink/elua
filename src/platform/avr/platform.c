#include "platform.h"
#include "sercon.h"

#include <avr/io.h>
#include <avr/interrupt.h>

int platform_init() {
    sercon_init();
    return PLATFORM_OK;
}

int platform_cpu_set_global_interrupts(int status) {
    int old_status = (SREG & (1 << SREG_I)) != 0;

    if (status == PLATFORM_CPU_ENABLE) {
        sei();
    } else {
        cli();
    }

    return old_status;
}
