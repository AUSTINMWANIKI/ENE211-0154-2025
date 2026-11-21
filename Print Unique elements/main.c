#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[100],n,ctr;

    printf("print all unique  elements of an array:\n");
    printf("Input the number of elements to the stored in the array:");
    scanf("%d",&n);

    printf("Input %d elements in the array:\n",n);
    for (int i = 0; i < n; i++){
        printf("element - %d : ",i);
        scanf("%d" , &arr[i]);
    }

    printf("\nThe unique elements found in the array are:");
    for (int i=0; i<n; i++){
        ctr=0;
        for(int j=0; j<n; j++){
            if(i!=j && arr[i]==arr[j]){
                ctr++;
            }
        }
        if(ctr == 0){
            printf("%d" , arr[i]);

        }
    }

    printf("\n");

    return 0;
}
