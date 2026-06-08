#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

int main()
{
    my_putchar('H');
    my_putchar('e');
    my_putchar('l');
    my_putchar('l');
    my_putchar('o');
    my_putchar('\n');
    return 0;
}