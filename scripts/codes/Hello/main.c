#include <stdio.h>
#include "util.h"

int main()
{
    int a, b, c;
    int g;

    a = readint("Enter the first number :", 1, 100);
    b = readint("Enter the second number :", 50, 100);
    c = readint("Enter the last number :", 1, 50);

    g = a;
    if (b > g)
    {
        g = b;
    }
    if (c > g)
    {
        g = c;
    }

    printf("The largest number was %d.\n", g);
    return 0;
}
