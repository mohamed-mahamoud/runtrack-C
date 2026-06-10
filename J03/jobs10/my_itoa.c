#include <stdio.h>
#include <stdlib.h>

char *my_itoa(int n)
{
    char *str = malloc(12 * sizeof(char));
    if (str == NULL)
        return NULL;
    int i = 0;
    int sign = 1;
    if (n < 0) {
        sign = -1;
        n = -n;
    }
    do {
        str[i++] = (n % 10) + '0';
        n /= 10;
    } while (n > 0);
    if (sign == -1) {
        str[i++] = '-';
    }
    str[i] = '\0';
    return str;
}

int main()
{
    int num1 = -12345;
    int num2 = 67890;
    char *str1 = my_itoa(num1);
    char *str2 = my_itoa(num2);

    printf("my_itoa(%d) = %s\n", num1, str1);
    printf("my_itoa(%d) = %s\n", num2, str2);

    free(str1);
    free(str2);
    return 0;
}
