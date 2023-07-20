#include <stdio.h>
#include <stdlib.h>

float averageArray(int *arr, int size);

int main()
{
    int arr[] = {1,2,3,4};
    printf("The average of the array is %.2f\n", averageArray(arr, sizeof(arr)/sizeof(int)));
    return 0;
}

float averageArray(int *arr, int size)
{
    float avgSoFar;
    if(size == 1)
        return arr[0];
    avgSoFar = averageArray(arr + 1, size - 1);
    return (avgSoFar * (size - 1) + arr[0]) / size;
}
