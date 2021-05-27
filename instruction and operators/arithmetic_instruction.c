#include <stdio.h>

int main()
{
    int a = 8;
    int b = 4;
    int z;
    z = a * b; //legal
    //a *b = z; // illegal
    printf("The value of a + b is %d\n", a + b);
    printf("The value of a - b is %d\n", a - b);
    printf("The value of a * b is %d\n", a * b);
    printf("The value of a % b is %d\n", a % b);
    printf("The value of z is %d\n", z);
    return 0;
}