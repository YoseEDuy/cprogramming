#include <stdio.h>

int main()
{
    int principle = 1000000, rate = 22, years = 2;
    int simpleIntrest = (principle * rate * years) / 100;
    printf("The value of simple intrest is %d", simpleIntrest);

    return 0;
}