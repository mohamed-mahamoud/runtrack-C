#include <stdio.h>
#include <stdlib.h>

int* int_dup(int value)
{
    int* ptr = malloc(sizeof(int));
    if (ptr == NULL)
        return NULL;

    *ptr = value;
    return ptr;
}

int main()
{
    int value = 42;
    int* duplicated_value = int_dup(value);
    
    printf("value: %d\n", *duplicated_value);
    free(duplicated_value); 
    return 0;
}