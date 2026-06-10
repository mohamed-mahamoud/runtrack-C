#include <stdio.h>

char to_lower(char c)
{
    int c_ascii= (int)c+32 ;
    char c_lower=(char)c_ascii;
    return c_lower;
}

char to_upper(char c)
{
    int c_ascii= (int)c-32 ;
    char c_upper=(char)c_ascii;
    return c_upper;
}

char switch_case(char c)
{
    int c_ascii= (int)c;
    if (c_ascii >= 65 && c_ascii <= 90) {
        return to_lower(c);
    } else if (c_ascii >= 97 && c_ascii <= 122) {
        return to_upper(c);
    } else {
        return c; // Return the original character if it's not an alphabet
    }
}

int main() {
    char a = 'A';
    char b = 'a';
    printf("to_lower('%c') = '%c'\n", a, to_lower(a));
    printf("to_upper('%c') = '%c'\n", b, to_upper(b));
    printf("switch_case('%c') = '%c'\n", a, switch_case(a));
    printf("switch_case('%c') = '%c'\n", b, switch_case(b));
    return 0;
}