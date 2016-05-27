# include<stdio.h>

int main()
{
    unsigned int passes;
    unsigned int failures;
    unsigned int student;
    int result;

    passes = 0;
    failures = 0;
    student = 1;

    while(student <= 10)
    {
        printf("%s", "Please enter your exam result\n");
        scanf("%d", &result);

        if(result == 1)
        {
            passes = passes + 1;
        }
        else if(result == 2)
        {
            failures = failures + 1;
        }
        else
        {
            printf("%s", "Sorry you enterd a wrong number program will now terminate\n");
            break;
        }
        student = student + 1;
    }

    printf("passed %u\n", passes);
    printf("failed %u\n", failures);

    if(passes >=8)
    {
        printf("Bonus to instructor!\n");
    }
    
    return 0;
}

