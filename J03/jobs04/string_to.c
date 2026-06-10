#include <stdio.h>
#include "../jobs02/to.c"

void str_to_lower(char *s)
{
    int i = 0;
    while (s[i] != '\0') {
        s[i] = to_lower(s[i]);
        i++;
    }
}

void str_to_upper(char *s)
{
    int i = 0;
    while (s[i] != '\0') {
        s[i] = to_upper(s[i]);
        i++;
    }
}

void str_switch_case(char *s)
{
    int i = 0;
    while (s[i] != '\0') {
        s[i] = switch_case(s[i]);
        i++;
    }
}


int main() 
{
    char str1[] = "Hello, World!";
    char str2[] = "Hello, World!";
    char str3[] = "Hello, World!";

    str_to_lower(str1);
    printf("str_to_lower: %s\n", str1);

    str_to_upper(str2);
    printf("str_to_upper: %s\n", str2);

    str_switch_case(str3);
    printf("str_switch_case: %s\n", str3);

    return 0;
}