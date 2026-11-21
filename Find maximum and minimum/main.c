#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, max, min;
    int arr[100];

    //Read the number of elements
    printf("Input the number of elements to be stored in the array:");
    scanf("%d",&n);

    //Read elements into the array
    printf("Input %d elements in the array :\n",n);
    for (i = 0; i < n; i++){
        printf("element - %d:",i);
        scanf("%d", &arr[i]);
    }
    //Assume the first element is both maximum and minimum
    max = arr[0];
    min=arr[0];

    //Compare the remaining elements to update max and min
    for (i = 1; i < n; i++){
        if (arr[i] > max){
            max=arr[i];
        }
        if (arr[i] < min){
            min = arr[i];
        }
    }
    //Print the final results
    printf("Maximum element is : %d\n", max);
    printf("Minimum element is : %d\n", min);

    return 0;
}
