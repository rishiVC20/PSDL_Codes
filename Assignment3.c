/*Write an Embedded C program for sorting the numbers in ascending and descending order.
(Show the output in memory section of simulator)*/

#include <stdlib.h>
#include <pic18f458.h>

void main()
{
    int n;
    n = 5;
    int arr1[] = {7, 5, 9, 6, 2};
    int arr2[] = {7, 5, 9, 6, 2};
    LATB = 0;

    while (1)
    {
        switch (LATB)
        {
        case 0:
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n - i - 1; j++)
                {
                    if (arr1[j] > arr1[j + 1])
                    {
                        int temp;
                        temp = arr1[j];
                        arr1[j] = arr1[j + 1];
                        arr1[j + 1] = temp;
                    }
                }
            }
            break;
        case 1:
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n - i - 1; j++)
                {
                    if (arr2[j] < arr2[j + 1])
                    {
                        int temp;
                        temp = arr2[j];
                        arr2[j] = arr2[j + 1];
                        arr2[j + 1] = temp;
                    }
                }
            }
            break;
        }
    }
}