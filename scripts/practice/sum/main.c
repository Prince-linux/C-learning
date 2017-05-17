/* A program that calculates the product of three integers */

#include <stdio.h>

int main()
{
	int x, y, z, result;
	
	printf(" Please enter three integers : ");
	scanf("%d%d%d", &x, &y, &z);
	
	result = x * y * z;
	
	printf("The product is %d\n", result);
}