/* A program that reads radius of a circle and prints it's diameter, circumference, and area */

#include <stdio.h>

int main()
{
    float radius, diameter, area, circumference;
    
    printf(" Please enter the radius of your circle : ");
    scanf("%f", &radius);
    
    diameter = radius * 2;
    circumference = diameter * 3.14159;
    area = radius * radius * 3.14159;
    
    printf(" Your diameter is %f\n", diameter);
    printf(" Your circumference is %f\n", circumference);
    printf(" Your area is also %f\n", area);
}
