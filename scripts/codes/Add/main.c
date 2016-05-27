// Addition program.
#include <stdio.h>

// function main begins program execution
int main(void)
{
    int integer1, integer2, sum;

    printf("Enter First and Second Integers\n" );
    scanf("%d %d",&integer1, &integer2);
    sum = integer1 + integer2;
    printf( "Sum is %d\n", sum );
    return 0;
}
