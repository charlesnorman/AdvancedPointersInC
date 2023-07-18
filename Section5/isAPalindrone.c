#include <stdio.h>
#include <stdlib.h>

int isAPalidrone(int *arr, int size);

int main()
{
    int arr[] = {9,8,6,6,6,7,8,9};
    int result;
    result = isAPalidrone(arr, sizeof(arr)/sizeof(int));
    printf("The array %s a palindrome.\n", result ? "is" : "is NOT");
    return 0;
}

int isAPalidrone(int *arr, int size)
{
    if(size < 2)
    {
        return 1;
    }
    if(arr[0] != arr[size -1])
    {
        return 0;
    }else
    {
        return isAPalidrone(arr + 1, size -2);
    }
    return 0;
}