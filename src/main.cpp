#include "pico/stdlib.h"
#include "hardware/pwm.h"
#include "hardware/gpio.h"
#include <stdio.h>

int main() {
    stdio_init_all();

    // Your servo control code will go here

    while (true) {
        // Main loop
        sleep_ms(100);
    }

    return 0;
}
