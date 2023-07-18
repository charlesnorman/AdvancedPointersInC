#include <stdio.h>
#include <stdlib.h>

#define SIZE 5
int *createArray();
void displayArray(int *arr, int size);

int main()
{
    int *arr;
    arr = createArray();
    displayArray(arr, SIZE);
    free(arr);
}

int *createArray()
{
    int *myArray = malloc(SIZE * sizeof(int));
    printf("Enter %d elements to you array.\n", SIZE);
    for (int i = 0; i < SIZE; i++)
    {
        printf("Enter value number %d:", i + 1);
        scanf("%d", myArray + i);
        printf("\n");
    }
    return myArray;
}

/*DisplayArray function*/
void displayArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Value #%d: %d\n", i + 1, arr[i]);
    }
}
