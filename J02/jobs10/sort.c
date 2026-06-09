#include <stdio.h>
#include <stdlib.h>

int *sort(int *array)
{
    int temp;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4 - i; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    return array;
}

int main()
{
    int arr[5] = {5, 2, 9, 1, 5};
    int *sorted_arr = sort(arr);

    printf("Sorted array: ");
    for (int i = 0; i < 5; i++)
        printf("%d ", sorted_arr[i]);
    printf("\n");

    return 0;
}