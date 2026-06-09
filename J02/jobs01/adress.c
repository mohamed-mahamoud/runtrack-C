#include <stdio.h>

void print_adress(int *n)
{
    printf("%p\n", (void *)n);
}

int main()
{
    int n = 42;
    print_adress(&n);
    return 0;
}
