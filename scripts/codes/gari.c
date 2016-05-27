# include<stdio.h>

int main()
{
    int counter;
    float average;
    int grade;
    int total;

    total = 0;
    counter = 0;

    while(grade != -1)
    {
        total = total + grade;
        counter = counter + 1;

        printf("%s", "Enter grade, -1 to end: ");
        scanf("%d", &grade);
    }

    if(counter != 1)
    {
        average = (float)total / counter;
        printf("Class average is %.2f\n", average);

    }

    else
    {
        puts("No grades were enterd");
    }
   return 0;
}
