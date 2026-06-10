#include <stdio.h>

void str_sanitize(char *s)
{
    int i = 0;
    while (s[i] != '\0') {
        if (s[i] < 32 || s[i] > 126) {
            s[i] = '?'; // Replace non-printable characters with '?'
        }
        i++;
    }
}

int main() 
{
    char str1[] = "\ntest\n";
    printf("Original: %s\n", str1);
    
    str_sanitize(str1);
    
    printf("Sanitized : %s\n", str1);
    
    return 0;
}