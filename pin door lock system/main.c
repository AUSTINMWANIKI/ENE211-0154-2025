#include <stdio.h>
#include <stdlib.h>

int main()
{
    // declare variables
    int correctpin = 9999;
    int userpin;
    int count=0;
    int attempts;
    while (count<3)
    {
    printf("Please enter userpin:\n ");
    scanf("%d",&userpin);
    if (userpin<1000||userpin>9999)
    {
        printf("Pin must be 4 digits: \n");
        count=count+1;
    }
        else if (userpin==9999)
        {
            printf("\nAccess granted");
            break;
        }
        else
    {
        count=count+1;
        attempts = 3-count;
        printf("Wrong pin, %d attempts remaining \n", attempts);
    }


    }

    if (count==3)
    {
        printf("\nToo many attempts. Your account will be locked for one hour");
    }
    return 0;
}
