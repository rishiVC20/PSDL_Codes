/*Write an Embedded C program to add array of n numbers.
(Show the output in simulator)*/

#include <stdio.h>
#include <stdlib.h>
#include <pic18f458.h>

void main()
{
    int arr[6] = {1, 4, 10, 20, 3, 5};
    int sum;
    sum = 0;
    int i;
    for (i = 0; i < 6; i++)
    {
        sum += arr[i];
    }

    TRISD = 0x00;
    PORTD = sum;
}