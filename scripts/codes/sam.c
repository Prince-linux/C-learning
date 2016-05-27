#include <stdio.h>

int fact(int n)
{
    if (n < 2) {
        return 1;
    } else {
        return n * fact(n-1);
    }
}

int main()
{
    int i; 

    for (i = 0; i < 7; ++i) {
        printf("%2d %5d\n", i, fact(i));
    }

    return 0;
}
