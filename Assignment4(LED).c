// Write an Embedded C program to interface PIC 18FXXX with LED & blinking it using specified delay.

#include <stdlib.h>
#include <pic18f458.h>

void msDelay(unsigned int time)
{
    int i;
    for (int i = 0; i < time; i++)
        for (int j = 0; j < 700; j++)
            ;
}

void main()
{
    TRISB = 0x00;
    PORTB = 0xFF;

    while (1)
    {
        TRISB = 0x00;
        PORTB = ~PORTB;
        msDelay(1000);
    }
}
