#include <stdio.h>
#include <stdlib.h>


void minMax(int *arr, int size, int *minValue, int *maxValue)
{
    *minValue = arr[0];
    *maxValue = arr[0];

    for(int i = 0; i < size; i++)
    {
        if(arr[i] > *maxValue)
        {
            *maxValue = arr[i];
        }
        if(arr[i] < *minValue)
        {
            *minValue = arr[i];
        }
    }
}

int main()
{
    int myGrades[] = {80, 90, 100};
    int min, max;

    minMax(myGrades, sizeof(myGrades)/sizeof(int), &min, &max);
    printf("The maximum value is %d\n", max);
    printf("The minimum value is %d\n", min);

    return 0; 
}