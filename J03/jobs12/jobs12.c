#include <unistd.h>
#include "../jobs11/itoa_hex.c"
#include "../jobs10/my_itoa.c"
#include "../jobs08/fibonacci.c"
#include "../jobs07/factorial.c"

int main() 
{
    int num = 3;
    char *hex_str = itoa_hex(num);
    char *dec_str = my_itoa(num);
    int fact = -1;
    int fib = -1;
    if (num<10){
        fact = factorial(num);
    }

    if (num<20){
        fib = fibonacci_it(num);
    }

    if (hex_str != NULL) {
        write(1, "Hexadecimal: ", 13);
        write(1, hex_str, 8);
        write(1, "\n", 1);
        free(hex_str); 
    }

    if (dec_str != NULL) {
        write(1, "Decimal: ", 9);
        write(1, dec_str, strlen(dec_str));
        write(1, "\n", 1);
        free(dec_str);
    }

    if (fact != -1){
        write(1, "Factorial: ", 11);
        char *fact_str = my_itoa(fact);
        write(1, fact_str, strlen(fact_str));
        write(1, "\n", 1);
        free(fact_str);
    }

    if (fib != -1){
        write(1, "Fibonacci: ", 11);
        char *fib_str = my_itoa(fib);
        write(1, fib_str, strlen(fib_str));
        write(1, "\n", 1);
        free(fib_str);
    }


    return 0;
}