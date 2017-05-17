/* A program that asks the user to enter two numbers, obtains them from the user and prints their sum, product, difference, quotient and remainder. */

#include <stdio.h>

int main()
{
	int a, b;
	int result;
	
	printf("%s", " Please enter two numbers: ");
	scanf("%d%d", &a, &b);
	
	result = a + b;
	printf(" The Sum of the two numbers is %d\n", result);
	
	result = a * b;
	printf(" The product of the two numbers is %d\n", result);
	
	result = a - b;
	printf(" The difference of the two numbers is %d\n", result);
	
	result = a / b;
	printf(" The quotient of the two numbers is %d\n", result);
	
	result = a % b;
	printf(" The remainder of the two numbers is %d\n", result);
}

