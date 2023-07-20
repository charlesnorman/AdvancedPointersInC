/**
 * "Write a recursive function that:
 *      - receives an array of floating point numbers (>0) and it's size
 *      - Returns 1 if:
 *          - for any two adjacent elements in the array
 *            the integer parts are sorted in ascending order,
 *            ant the fractional parts are sorted in descending order
 * "
 *
 *
 * For example #1:
 *  Given array: 1.4, 3.25, 4.5
 *  The function returns 0
 *
 * For example 2:
 *  Given array: 1.4, 3.25, 4.2
 * */

#include <stdio.h>
#include <stdlib.h>

int checkSortedFloatArray(float *arr, int size);

int main()
{
    float arr1[] = {1.9, 2.8, 3.7, 4.6};
    float arr2[] = {1.9, 2.8, 3.9, 4.2};
    int results;

    results = checkSortedFloatArray(arr1, sizeof(arr1) / sizeof(float));
    printf("The array, arr1, %s sorted properly.\n", results ? "is" : "is not");
    results = checkSortedFloatArray(arr2, sizeof(arr2) / sizeof(float));
    printf("The array, arr2, %s sorted properly.\n", results ? "is" : "is not");

    for (int i = 0; i < (int)(sizeof(arr1) / sizeof(float)); i++)
    {
        printf("% d  %.2f  \n", (int)arr1[i], arr1[i] - ((int)arr1[i]));
    }
    return 0;
}

int checkSortedFloatArray(float *arr, int size)
{
    /*Base case: size < 2*/
    if (size < 2)
    {
        return 1;
    }
    if (
        ((int)arr[0] <= (int)arr[1]) &&
        ((arr[0] - (int)arr[0]) >= (arr[1] - (int)arr[1])))
    {
        return checkSortedFloatArray(arr+1,size-1);
    }else
    {
        return 0;
    }
}