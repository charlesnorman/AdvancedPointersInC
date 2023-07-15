#include <stdio.h>
#include <stdlib.h>

#define SIZE 4

int sumArray(int * arr, int size)
{
    int sum = 0;
    for(int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

double averageArray(int * arr, int size)
{
    int sum = 0;
    sum = sumArray(arr, size);
    return (double)sum / size;
}

int main()
{
    int grades[SIZE] = {80, 85, 72, 90};
    double average;
    average = averageArray(grades, SIZE);
    printf("Average of grades is %.2f", average);
    return 0;
}
