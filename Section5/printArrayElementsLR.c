#include <stdio.h>
#include <stdlib.h>

void printArrayFromRight(int *arr, int size);

void printArrayFromLeft(int *arr, int size);

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    printArrayFromRight(arr, sizeof(arr) / sizeof(int));
    printf("\n");
    printArrayFromLeft(arr, sizeof(arr) / sizeof(int));
    printf("\n");
    return 0;
}

void printArrayFromRight(int *arr, int size)
{
    if (size > 0)
    {
        printArrayFromRight(arr + 1, size - 1);
        printf("%d ", arr[0]);
    }
}
void printArrayFromLeft(int *arr, int size)
{
    if (size > 0)
    {
        printf("%d ", arr[0]);
        printArrayFromLeft(arr + 1, size -1);
    }
}