#include <stdio.h>
#include "hardware.h"

static int led_state = 0;

void init_port() {
    printf("Hardware Initialized (Simulated)\n");
}

void toggle_led() {
    led_state = !led_state;
    printf("LED State: %d\n", led_state);
}

int read_button() {
    int state;
    printf("Enter button state (0/1): ");
    scanf("%d", &state);
    return state;
}

