#include <stdio.h>

int fibonacci_it(int n)
{
    if (n <= 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        int a = 0, b = 1, c;
        for (int i = 2; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        return b;
    }
}

int fibonacci_rec(int n)
{
    if (n <= 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci_rec(n - 1) + fibonacci_rec(n - 2);
    }
}

int main()
{
    int n = 10;
    printf("Fibonacci de %d (iteratif) = %d\n", n, fibonacci_it(n));
    printf("Fibonacci de %d (recursif) = %d\n", n, fibonacci_rec(n));
    return 0;
}