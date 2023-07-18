#include <stdio.h>
#include <stdlib.h>

/** Exercise: Writa a function that receives and array.
 * The function should find and return the
 * second smallest in the array.
 */

int find2ndSmallest(int *arr, int size)
{
    int smallest = arr[0];
    int _2ndSmallest;
    if (size == 2)
        return arr[0] < arr[1] ? arr[0] : arr[1];
    for(int i = 1; i < size; i++)
    {
        if(arr[i] < smallest)
        {
            _2ndSmallest = smallest;
            smallest = arr[i];
        }
    }
    return _2ndSmallest;
    
}

int main()
{
    int arr[] = {12,5,2,4,9,3};
    printf("The 2nd smallest interger of this array is %d", find2ndSmallest(arr, sizeof(arr)/sizeof(int)));
    return 0;
}