#include <stdio.h>
#include <stdlib.h>

int main()
{
	unsigned int frequency1 = 0;
	unsigned int frequency2 = 0;
	unsigned int frequency3 = 0;
	unsigned int frequency4 = 0;
	unsigned int frequency5 = 0;
	unsigned int frequency6 = 0;
	
	unsigned int roll;
	
	int face;
	
	for(roll = 1; roll <= 6000000; ++roll)
	{
		face = 1 + rand() % 6;
		
		switch (face)
		{
			case 1:
			++frequency1;
			break;
			
			case 2:
			++frequency2;
			break;
			
			case 3:
			++frequency3;
			break;
			
			case 4:
			++frequency4;
			break;
			
			case 5:
			++frequency5;
			break;
			
			case 6:
			++frequency6;
			break;	
		}
	}
	
	printf("%s%13s\n", "Face", "Frequency");
	printf("	1%13u\n", frequency1);
	printf("	2%13u\n", frequency2);
	printf("	3%13u\n", frequency3);
	printf("	4%13u\n", frequency4);
	printf("	5%13u\n", frequency5);
	printf("	6%13u\n", frequency6);
}