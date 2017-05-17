/* A program that prints out product, sum, average and compares input from the user */

#include <stdio.h>

int main()
{
	int a, b, c, sum, average, product;
	
	printf(" Please enter three numbers of your choice :");
	scanf("%d%d%d", &a, &b, &c);
	
	sum = a + b + c;
	printf(" The sum of the three numbers are %d\n", sum);
	
	product = a * b * c;
	printf(" The product of the three numbers are %d\n", product);
	
	average = sum / 3;
	printf(" The average of the three numbers are %d\n", average);
	
	if(a < b && a < c)
	{
		printf(" The smallest is %d\n", a);
	}
	if(b < a && b < c)
	{
		printf(" The smallest is %d\n", b);
	}
	if(c < a && c < b)
	{
		printf(" The smallest is %d\n", c);
	}			
	if(a > b && a > c)
	{
		printf(" The largest is %d\n", a);
	}
	if(b > a && b > c)
	{
		printf(" The largest is %d\n", b);
	}
	if(c > a && c > b)
	{
		printf(" The largest is %d\n", c);
	}
}