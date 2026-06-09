#include <stdio.h>

void divide(int *a)
{
    printf("la valeur diviser par 2 : %d\n", *a / 2);
}

int main()
{
    int a = 10;
    divide(&a);
    return 0;
}