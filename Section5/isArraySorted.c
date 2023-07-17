#include <stdio.h>
#include <stdlib.h>

/** Write a functionl checks if the arra is "Really Sorted", "Sorted, "Not Sorted.
 * The function should return 1 and pass 1 by reference ilf the array is "Really Sorted".
 * The function should return 1 and pass 0 by reference ilf the array is "Sorted" *
 * The function should return 0 and pass 0 by reference ilf the array is "Not Sorted" *  
*/

/**
 * Example: [1,2,5,7,10] --> Really Sorted. R - 1 P -1 // For any pair: Left Element < Right element
 * Example: [1,2,2,5,10] --> Sorted. R - 1 P - 0       // For any pair: Left Element <= Right element
 * Example: [1,2,5,3,10] --> Not Sorted. R - 1 P - 0 
*/

int isArraySorted(int *arr, int *reallySorted, int size)
{
    int sorted = 1;
    *reallySorted = 1;

    for(int i = 0; i < size - 1; i++)
    {
       if(arr[i] > arr[i + 1])
       {
            *reallySorted = 0;
            return 0;
       }
       if(arr[i] <= arr[i + 1])
       {
            sorted = 1;
       }
       if(arr[i] == arr[i + 1])
       {
            *reallySorted = 0;
       } 
    }
    return sorted;
}

int main()
{
    int arr1[] = {1,2,5,7,10};
    int arr2[] = {1,2,2,7,10};
    int arr3[] = {1,2,5,3,10};
    int sorted = 0;
    int reallySorted = 0;

    sorted = isArraySorted(arr1, &reallySorted, sizeof(arr1)/sizeof(int));
    printf("Is arr1 \"Sorted\"? %s Is arr1 Is arr1 \"Really Sorted\"? %s \n", (sorted == 1) ? "Yes" : "No", (reallySorted == 1) ? "Yes" : "No" );

    sorted = isArraySorted(arr2, &reallySorted, sizeof(arr2)/sizeof(int));
    printf("Is arr2 \"Sorted\"? %s Is arr2 Is arr1 \"Really Sorted\"? %s \n", (sorted == 1) ? "Yes" : "No", (reallySorted == 1) ? "Yes" : "No" );

    sorted = isArraySorted(arr3, &reallySorted, sizeof(arr3)/sizeof(int));
    printf("Is arr3 \"Sorted\"? %s Is arr2 Is arr1 \"Really Sorted\"? %s \n", (sorted == 1) ? "Yes" : "No", (reallySorted == 1) ? "Yes" : "No" );
    
    return 0;
}