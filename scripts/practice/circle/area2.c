/* A program that reads radius of a circle and prints it's diameter, circumference, and area */

#include <stdio.h>

int main()
{
    float radius;
    
    printf(" Please enter the radius of your circle : ");
    scanf("%f", &radius);
    printf(" Your diameter is %f\n", radius * 2);
    printf(" Your circumference is %f\n", radius * 2 * 3.14159);
    printf(" Your area is also %f\n", radius * radius * 3.14159);
}
