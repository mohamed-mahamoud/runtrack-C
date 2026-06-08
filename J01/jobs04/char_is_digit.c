#include <stdio.h>

int char_is_digit(char c)
{
    if (c >= '0' && c <= '9')
        return 1;
    else
        return 0;
}

int main(){
    char test1= '5';
    char test2= 'a';
    printf("%d\n", char_is_digit(test1));
    printf("%d\n", char_is_digit(test2));
    return 0;
}