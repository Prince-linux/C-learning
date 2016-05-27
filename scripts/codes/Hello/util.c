#include "util.h"
#include <stdio.h>

int readint(char *prompt, int min, int max)
{
    int n;

    while (TRUE)
    {
        printf("%s (%d - %d): ", prompt, min, max);
        scanf("%d", &n);

        if (n >= min && n <= max)
        {
            break;
        }
        else
        {
            printf("Sorry, the number is out of range.");
            printf("Try again.\n");
        }
    }
    return n;
}

