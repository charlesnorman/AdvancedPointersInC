#include <stdio.h>
#include <stdlib.h>

void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}

void reverseArray(char *arr, int size)
{
    for (int i = 0; i < size / 2; i++)
    {
        swap(&arr[i], &arr[size - 1 - i]);
    }
}

void reverseArrayRecursive(char *arr, int size)
{
    if(size/2 > 1)
    {
        swap(&arr[0], &arr[size -1] );
    }
    arr += 1;
    size -= 1;
    if(size/2 < 1)
    {
        return;
    }
    reverseArrayRecursive(arr, size);
}

void reverseArrayRecursive2(char *arr, int n)
{
    if(n > 1)
    {
        swap(arr, arr + n - 1);
        reverseArrayRecursive2(arr+1, n-2);
    }
}

void printArray(char *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("arr[i] = %c (%d) &%p\n", (char)arr[i], arr[i], &arr[i]);
    }
}

int main()
{
    char arr[] = {'a', 'b', 'c', 'd', 'e'};
    printArray(arr, sizeof(arr) / sizeof(char));
    printf("\n");

    reverseArrayRecursive2(arr, sizeof(arr) / sizeof(char));
    printArray(arr, sizeof(arr) / sizeof(char));

    return 0;
}