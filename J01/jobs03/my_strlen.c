#include <stdio.h>

int my_strlen(char *str)
{
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    return length;
}

int main()
{
    char *testString = "Hello";
    int length = my_strlen(testString);
    printf("Length of the string: %d\n", length);
    return 0;
}