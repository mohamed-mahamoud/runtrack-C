#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_putstr(char *str)
{
    while (*str)
    {
        my_putchar(*str);
        str++;
    }
}

int main()
{
    my_putstr("Hello, World!\n");
    return 0;
}
