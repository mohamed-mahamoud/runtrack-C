#include <stdio.h>

int power(int base, int exponent) {
    if (exponent < 0) {
        return 0; // Return 0 for negative exponents
    }
    int result =base;
    for (int i = 1; i < exponent; i++) {
        result *= base; // Multiply base by itself exponent times
    }
    return result;
}

int main() {
    int base = 2;
    int exponent = 3;
    int result = power(base, exponent);
    printf("la puissance de %d à la puissance %d est %d\n", base, exponent, result);
    
    return 0;
}