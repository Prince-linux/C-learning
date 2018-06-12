/* A simple C program to calculate Pets */

#include<stdio.h>

int main()
{
    int Total_Pets;
    int Dogs;
    int Cats;
    int Ponnies;
    int Others;
    
    Cats = 2;
    Dogs = 1;
    Ponnies = 1;
    Others = 56;

    Total_Pets = Dogs + Cats + Ponnies + Others;

    printf("We have %d pets in total\n", Total_Pets);
    return 0;
}
