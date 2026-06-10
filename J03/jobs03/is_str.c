#include <stdio.h>
#include "../jobs01/is.c"

int str_is_digit(char *s)
{
    int i = 0;
    while (s[i] != '\0') {
        if (!is_digit(s[i])) {
            return 0; // Return 0 if any character is not a digit
        }
        i++;
    }
    return 1; // Return 1 if all characters are digits
}

int str_is_alpha(char *s)
{
    int i = 0;
    while (s[i] != '\0') {
        if (!is_alpha(s[i])) 
        {
            return 0; // Return 0 if any character is not an alphabet
        }
        i++;
    }
    return 1; // Return 1 if all characters are alphabets
}

int str_is_print(char *s)
{
    int i = 0;
    while (s[i] != '\0') {
        if (!is_print(s[i])) {
            return 0; // Return 0 if any character is not printable
        }
        i++;
    }
    return 1; // Return 1 if all characters are printable
}

int main() 
{
    char str1[] = "12345";
    char str2[] = "Hello";
    char str3[] = "Hello, World!";
    char str4[] = "Hello\nWorld";

    printf("str_is_digit(\"%s\") = %d\n", str1, str_is_digit(str1));
    printf("str_is_alpha(\"%s\") = %d\n", str2, str_is_alpha(str2));
    printf("str_is_print(\"%s\") = %d\n", str3, str_is_print(str3));
    printf("str_is_print(\"%s\") = %d\n", str4, str_is_print(str4));

    return 0;
}
