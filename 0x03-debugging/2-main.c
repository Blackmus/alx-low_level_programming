#include <stdio.h>
#include "main.h"

int largest_number(int a, int b, int c); // Function prototype

int main()
{
    int a = 10, b = 20, c = 15;
    int largest = largest_number(a, b, c);

    printf("The largest number among %d, %d, and %d is: %d\n", a, b, c, largest);

    return 0;
}

