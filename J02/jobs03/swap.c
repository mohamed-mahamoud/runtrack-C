#include <stdio.h>

void swap(int *a,int *b) 
{
    int temps;
    temps = *a;
    *a = *b;
    *b = temps;
}

int main()
{
    int a=10, b=20;
    printf(" a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf(" a = %d, b = %d\n", a, b);
    return 0;
}
