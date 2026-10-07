#include <stdio.h>
#include <stdlib.h>

int main()
{
    // declare variables
    int number_of_students;
    printf("Please enter number of students:\n");
    scanf("%d", &number_of_students);
    for (int i=1; i<=number_of_students;i++)

    {
        int Registrationnumber;
        float marks;
        char name[3];
        char grade;
        printf("Please enter your Registrationnumber:\n");
        scanf("%d",&Registrationnumber);
        printf("Please enter your marks:\n");
        scanf("%f",&marks);
        printf("Please enter your name:\n");
        scanf("%s",name);

        if(marks>=70 && marks <= 100)
        {
            printf("Grade A\n");
        }
        else if (marks>=60 && marks <= 69)
        {
            printf("Grade B\n");
        }
        else if (marks>=50 && marks<= 59)
        {
            printf("Grade C\n");
        }
        else if (marks>=40 && marks <=49)
        {
            printf("Grade D\n");

        }
        else
        {
            printf("Grade F\n");
        }

        if(marks>=40)
        {
            printf("Student has passed\n");
        }
        else
        {
            printf("Student has failed\n");
        }
        printf("\n");

    }
    return 0;
}
