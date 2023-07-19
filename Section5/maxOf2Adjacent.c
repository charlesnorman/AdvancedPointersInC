#include <stdio.h>
#include <stdlib.h>

/**
 * Develop a recursive function that returns the max of two adjacent
 * elements.
*/

int max2Adjacent(int *arr, int size);


int main()
{
    int arr[] = {1,2,4,3,1,7,2};
    printf("The max sum of 2 adjacent elements is %d\n", max2Adjacent(arr, sizeof(arr)/sizeof(int)));
    return 0;
}


int max2Adjacent(int *arr, int size)
{
    int currentSum, maxSumSoFar;
    if(size == 2)
        return arr[0] + arr[1];
    currentSum = arr[0] + arr[1];
    maxSumSoFar = max2Adjacent(arr + 1, size -1);
    if(maxSumSoFar >= currentSum)
        return maxSumSoFar;
    else
        return currentSum;
}