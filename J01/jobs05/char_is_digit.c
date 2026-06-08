#include <stdio.h>

int char_is_digit(char c)
{
    if (c >= '0' && c <= '9')
        return 1;
    else
        return 0;
}
 
int str_is_digit(const char *str)
{
    while (*str)
    {
        if (!char_is_digit(*str))
            return 0;
        str++;
    }
    return 1;
}

int main(){

    printf("%d\n", str_is_digit("123"));
    printf("%d\n", str_is_digit("12a"));
    return 0;
}