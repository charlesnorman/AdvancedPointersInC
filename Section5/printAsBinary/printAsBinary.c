#include <stdio.h>
#include <stdlib.h>


int printAsBinary(int n);


int main()
{
    int n = 10;
    int result;
    result = printAsBinary(n);
    return 0;
}


int printAsBinary(int n)
{
    if (n == 0)
        return 0;
    else
        return (n % 2 + 10 *
                printAsBinary(n / 2));    
}