#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j, temp;
    //Read the size of the array
    printf("Input the size of array : ");
    scanf("%d",&n);

    int arr[n];

    //Read elements into the array
    printf("Input %d elements in the array :\n",n);
    for (i = 0; i<n; i++){
        printf("element - %d: ", i);
        scanf("%d", &arr[i]);
    }

    //Sort the array in ascending order
    for (i=0; i<n-1; i++){
        for(j=0; j < n-i-1; j++){
            if (arr[j] > arr[j+1]){
                // Swap elements if the current one is greater than the next
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    //Print the sorted array
    printf("\nElements of array in sorted ascending order:");
    for (i = 0; i<n; i++){
        printf("%d", arr[i]);
    }
    printf("\n");
    return 0;
}
