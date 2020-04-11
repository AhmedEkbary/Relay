/*
 * File:   relay.c
 * Author: ADMIN
 *
 * Created on April 10, 2020, 12:46 AM
 */


#include <xc.h>

#define relay 2

int main(void) {

    //DDRA --- DDRB --- DDRC --- DDRD Data Direction
    DDRA |= (1 << relay);
    PORTA |= (1 << relay);

    while (1) {

    }
}
