#include "stdio.h"
#include "stdlib.h"

#define SIZE 4

int findIfKeyInArray(int *arr, int size, int key); 

int main()
{
    int grades[SIZE] = {80, 85, 72, 90};
    int result;
    int key = 72;
    result = findIfKeyInArray(grades, SIZE, key);
    printf("%d in array, %s/n", key, result == 0 ? "No" : "Yes");

    return 0;

}
int findIfKeyInArray(int *arr, int size, int key)
{
   int i;
   for(i = 0; i < SIZE; i++)
   {
       if(arr[i] == key)
           return 1;
   }
   return 0;
}
