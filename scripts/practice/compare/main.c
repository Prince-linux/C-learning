/* A program that compares two inputs the user */

#include <stdio.h>

int main()
{
	int k, l;
	
	printf(" Please enter any two numbers of your choice :");
	scanf("%d%d", &k, &l);
	
	if(k < l)
	{
		printf(" %d is larger!\n", l);
	}
	if(l < k)
	{
		printf(" %d is larger!\n", k);
	}
	if(k == l)
	{
		printf(" These numbers %d and %d are equal!\n", k, l);
	}
}