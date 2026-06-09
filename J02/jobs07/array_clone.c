#include <stdio.h>
#include <stdlib.h>

int *array_clone(int *arr,int n)
{
    int *clone = malloc(n * sizeof(int));
    if (clone == NULL)
        return NULL;

    for (int i = 0; i < n; i++)
        clone[i] = arr[i];

    return clone;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 4;

    int *cloned_arr = array_clone(arr, n);
    printf("Cloned array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", cloned_arr[i]);
    printf("\n");

    free(cloned_arr);
    return 0;
}
