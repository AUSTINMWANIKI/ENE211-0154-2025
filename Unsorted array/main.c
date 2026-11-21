#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[100];
    int n, i, value, pos;

    //Input the size of the array
    printf("Input the size of array:");
    scanf("%d",&n);

    //Input elements into the array
    printf("Input %d elements in the array in ascending order:\n",n);
    for (i = 0; i < n; i++){
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    //Input the new value and target position
    printf("Input the value to be inserted:");
    scanf("%d", &value);
    printf("Input the Position, where the value to be inserted:");
    scanf("%d", &pos);

    //Display the original array
    printf("The current list of the array : \n");
    for ( i = 0; i < n; i++){
        printf("% 5d", arr[i]);
    }

    //Shift elements to the right to make room for the new value
    for (i = n; i >= pos; i--){
        arr[i]=arr[i-1];
    }
    //Insert the new value at the specified 1-based position
    arr[pos - 1] = value;

    //Display the updated array
    printf("\n\nAfter Insert the element the new list is : \n");
    for (i = 0; i <= n; i++){
        printf("% 5d", arr[i]);
    }
    printf("\n");
    return 0;
}
