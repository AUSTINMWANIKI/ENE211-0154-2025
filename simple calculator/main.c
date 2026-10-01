#include <stdio.h>
#include <stdlib.h>

int main()
{   //declare variables
    int a,b;

    // request a and b
    printf("Please enter   number a  ");
    scanf("%d",&a);
    printf("Please enter   number b ");
    scanf("%d",&b);
    //Perform and display arithmetic operations
    printf("\n--- Results ---\n");
    printf("%d + %d = %d\n",a,b,a+b);
    printf("%d - %d = %d\n",a,b,a-b);
    printf("%d * %d = %d\n",a,b,a*b);
    printf("%d / %d = %.2f\n",a,b, (a*1.0) / b);
    printf("%d %% %d = %d\n",a,b,a%b);
    return 1;
}
