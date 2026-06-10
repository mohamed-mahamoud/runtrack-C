#include <stdio.h>
#include <stdlib.h>

char *itoa_hex(int n)
{
    char *hex_digits = "0123456789ABCDEF";
    char buffer[9]; 
    buffer[8] = '\0'; 

    for (int i = 7; i >= 0; i--) {
        buffer[i] = hex_digits[n % 16];
        n /= 16;
    }

    char *result = malloc(9 * sizeof(char));
    if (result == NULL) {
        return NULL; // Return NULL if memory allocation fails
    }
    for (int i = 0; i < 9; i++) {
        result[i] = buffer[i];
    }
    return result;
}

int main() 
{
    int number = 305441741;
    char *hex_string = itoa_hex(number);
    printf("la representation hex de %d est: %s\n", number, hex_string);
    free(hex_string);
    return 0;
}