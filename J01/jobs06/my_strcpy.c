#include <stdio.h>

void my_strcpy(char *dest, const char *src)
{
    while (*src)
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0'; // Null-terminate the destination string
}

int main()
{
    char src[] = "Hello, World!";
    char dest[20]; // Ensure this is large enough to hold the source string

    my_strcpy(dest, src);
    printf("Copied string: %s\n", dest);

    return 0;
}