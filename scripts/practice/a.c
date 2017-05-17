#include<stdio.h>

int square(int); // prototype for function square

int main()
{
	int a = 10; // value to square(local automatic value in main)
	printf("%d squared: %d\n", a, square(a)); // dispaly a square
}// end main

// returns the square of an integer 

int square(int x) // x is a local variable
{
	return x * x; // calculate square and return result
}// end function square