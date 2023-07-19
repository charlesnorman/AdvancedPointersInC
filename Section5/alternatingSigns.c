#include <stdio.h>
#include <stdlib.h>

/** Exercise: Recursion and arrays
 * Develop a recursive function that receives an array
 * of integers and it's size.
 * The Funtion shoul return:
 *      - 1, if every 2 adjacent elements have opposit
 *           signs.
 *      - 0, otherwise
 */

int hasAlternatingSigns(int *arr, int size);

int main()
{
    int arr[]= {1, -1, 2, -2, 3, -3};
    int results;
    results = hasAlternatingSigns(arr, sizeof(arr)/sizeof(int));
    printf("The array %s have alternating elements.\n", results ? "does" : "does NOT");
    return 0;
}

int hasAlternatingSigns(int *arr, int size)
{
    if (&arr[0] == &arr[size -1])
    {
        return 1;
    }
    if(arr[0] < 0 && arr[1] < 0)
    {
        return 0;
    }
    if(arr[0] > 0 && arr[1] > 0)
    {
        return 0;
    }
    return hasAlternatingSigns(arr +1, size - 1);
}
