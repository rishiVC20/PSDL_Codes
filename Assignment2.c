/*Write an Embedded C menu driven program by using input of menu choice as a variable for :
i) Multiply 8 bit number by 8 bit number
ii) Divide 8 bit number by 8 bit number
(Show the output in simulator) */

#include <xc.h>
#include <pic18f458.h>
void main()
{
    TRIDB = 0X00;
    TRISC = 0X00;
    int n1 = 0x06;
    int n2 = 0x05;
    LATB = 0X00;
    while (1)
    {
        switch (1)
        {
        case 0:
            int ans = n1 * n2;
            PROD = ans;
            break;

        case 1:
            int div = n1 / n2;
            int mod = n1 % n2;
            PORTB = div;
            PORTC = mod;
            break;
        }
    }
}