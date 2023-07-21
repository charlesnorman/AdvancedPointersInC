#include <stdio.h>
#include <stdlib.h>

void printAsBinary(int n);

int main()
{
    int n = 18;
    printAsBinary(n);
    return 0;
}

void printAsBinary(int n)
{
    if (n == 0)
    {
        return;
    }
    else
    {
        printAsBinary(n / 2);
        printf("%d", n % 2);
    }
}