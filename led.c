#include <stdio.h>

void led_init(void){

    printf("LED initialized\n");

}

void Led_on(void){

    printf("LED is on\n");

}


int main(void){

    led_init();
    led_on();
    printf("LED project started\n");
    return 0;

}

