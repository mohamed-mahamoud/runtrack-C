#include <stdio.h>

void increment(int *a) 
{
    (*a)++;
}

int main()
{
    int a=10;
    printf(" a = %d\n", a);
    increment(&a);
    printf(" a = %d\n", a);
    return 0;
}