#include <stdio.h>
#include <stdlib.h>

/** Exercise:  Write a function that receives a sorted (smallest -> largest) Array of elements
 * The function also finds a value.
 * The function should find if there is a sum of two elements in the array that
 * equals the received value.
 * If there are such 2 elements, then return 1, and pass their indexes.
 * Else, return 0, and pass for both of them a value of 0.
 */

int containsSum(int *arr, int size, int value, int *index1, int *index2) // time complexity n^2
{
    *index1 = 0;
    *index2 = 0;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = size - 1; j > i; j--)
        {
            if ((arr[i] + arr[j]) == value)
            {
                *index1 = i;
                *index2 = j;
                return 1;
            }
        }
    }
    return 0;
}

int containsSum2(int *arr, int size, int value, int *index1, int *index2) // time complexity n
{
    int i = 0, j = size - 1;
    /*Correct sum not found*/
    while (i != j)
    {
        if ((arr[i] + arr[j]) == value)
        {
            *index1 = i;
            *index2 = j;
            return 1;
        }
        if((arr[i] + arr[j]) > value)
        {
            j--;
        }
        if((arr[i] + arr[j]) < value)
        {
            i++;
        }
    }
    *index1 = 0;
    *index2 = 0;
    return 0;
}

int main()
{
    int arr[] = {1, 3, 4, 7, 9, 10, 12};
    int index1, index2;
    int *pIndex1 = &index1;
    int *pIndex2 = &index2;
    int results, value = 13;

    results = containsSum2(arr, sizeof(arr) / sizeof(int), value, pIndex1, pIndex2);
    if (results)
    {
        printf("The value of %d is the sum of %d (arr[%d]) and %d (arr[%d])", value, arr[index1], index1, arr[index2], index2);
    }
    else
    {
        printf("No sum of 2 array elements equals %d", value);
    }
}