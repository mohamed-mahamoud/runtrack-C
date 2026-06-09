#include <stdio.h>
#include <stdlib.h>

char *my_strdup(const char *str)
{
    size_t len = 0;
    while (str[len] != '\0')
        len++;

    char *dup = malloc((len + 1) * sizeof(char));
    if (dup == NULL)
        return NULL;

    for (int i = 0; i <= len; i++)
        dup[i] = str[i];

    return dup;
}

int main()
{
    const char *original = "Hello, World!";
    char *duplicate = my_strdup(original);

    
        printf("Original string: %s\n", original);
        printf("Duplicated string: %s\n", duplicate);
        free(duplicate); 


    return 0;
}