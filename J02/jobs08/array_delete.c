#include <stdio.h>
#include <stdlib.h>

void array_delete(int* arr)
{
    free(arr);
}

int main()
{
    int* arr = malloc(5 * sizeof(int));
    if (arr == NULL)
        return 1;

    for (int i = 0; i < 5; i++)
        arr[i] = i + 1;

    printf("Array elements: ");
    for (int i = 0; i < 5; i++)
        printf("%d ", arr[i]);
    printf("\n");

    array_delete(arr);
    if (arr==NULL)
        printf("ça était bien supprimé\n");
    return 0;
}