#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declare variables
    double area;
    const double pi = 3.142;
    double r;
    //request radius
    printf("Please enter radius\n");
    scanf("%lf", &r);
    area=pi*r*r;
    printf("The area is %lf",area);
    return 0;
}
