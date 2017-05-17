#include <stdio.h>

unsigned int factorial(unsigned int number);

int main()
{
	unsigned int i;
	
	for (i = 0; i <= 21; ++i)
	{
		printf("%u! = %llu\n", i, factorial(i));
		
	}
}

unsigned int factorial(unsigned int number)
{
	if (number <= 1)
	{
		return 1;
	}
	else 
	{
		return (number * factorial(number - 1) );
	}
}
