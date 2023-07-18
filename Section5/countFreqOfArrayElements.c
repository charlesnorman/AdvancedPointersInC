#include <stdio.h>
#include <stdlib.h>

void printValuesFrequency(int *arr, int size)
{
    int count, counted;
    for (int i = 0; i < size; i++)
    {
        counted = 0;
        count = 1;
        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                counted = 1;
                break;
            }
        }
        if (!counted)
        {
            for (int j = i + 1; j < size; j++)
            {
                if(arr[i] == arr[j])
                {
                    count++;
                }
            }
            printf("%d was in the array %d times.\n", arr[i], count);
        }
    }
}

int main()
{
    int arr[] = {5, 6, 11, 7, 6, 5, 10 ,11};
    printValuesFrequency(arr, sizeof(arr)/sizeof(int));
    return 0;
}