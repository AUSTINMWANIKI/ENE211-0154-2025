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

        if(marks<0 || marks>100){
            grade = 'I';
        }
        else{
            switch(marks / 10){
        case 10:
        case 9:
        case 8:
        case 7:
            grade='A';
            break;
        case 6:
            grade='B';
            break;
        case 5:
            grade='C';
            break;
        case 4:
            grade='D';
            break;
        default:
            grade='F';
            break;
            }
        }

        printf("Registrationnumber:%d\n",Registrationnumber);
        printf("Name:%s\n",name);
        printf("Marks:%f\n",marks);
        printf("Grade:%c\n",grade);
        if(marks >= 40 && marks <= 100){
            printf("Student has passed");
        }
        else if(marks < 40 && marks >= 0){
            printf("Student has failed");
        }
        else{
            printf("Invalid marks")
        }
    }

    return 0;
}
