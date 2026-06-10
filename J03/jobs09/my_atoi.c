#include <stdio.h>

int my_atoi(char *str)
{
    int i = 0;
    int sign = 1;
    int result = 0;

    // Skip leading whitespace
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
           str[i] == '\v' || str[i] == '\f' || str[i] == '\r') {
        i++;
    }

    // Check for optional sign
    if (str[i] == '+' || str[i] == '-') {
        if (str[i] == '-') {
            sign = -1;
        }
        i++;
    }

    // Convert digits to integer
    while (str[i] >= '0' && str[i] <= '9') {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return sign * result;
   
}

int main() 
{
    char str1[] = "   -12345";
    char str2[] = "   +67890";
    char str3[] = "   42";
    char str4[] = "   -0";

    printf("my_atoi(\"%s\") = %d\n", str1, my_atoi(str1));
    printf("my_atoi(\"%s\") = %d\n", str2, my_atoi(str2));
    printf("my_atoi(\"%s\") = %d\n", str3, my_atoi(str3));
    printf("my_atoi(\"%s\") = %d\n", str4, my_atoi(str4));

    return 0;
}