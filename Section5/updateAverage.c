#include <stdio.h>
#include <stdlib.h>

void updateAverage(float *average, int a, int b)
{
    *average = (a + b)/2;
}


int main()
{
    int a;
    int b;
    float average;
    
    printf("Enter the value for variable 'a': ");
    scanf("%d", &a);

    printf("Enter the value for variable 'b': ");
    scanf("%d", &b);

    updateAverage(&average, a, b);
    printf("The average of %d and %d is %.2f\n", a, b, average);
}