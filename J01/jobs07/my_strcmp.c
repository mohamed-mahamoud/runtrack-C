#include <stdio.h>

int my_strcmp( char *s1,  char *s2) {
    while (*s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    return *(unsigned char *)s1 - *(unsigned char *)s2;
}

int main() {
     char *str1 = "Hello";
    char *str2 = "Hello";
   char *str3 = "World";
   char *str4 = "Hellp";

    printf("Comparing '%s' and '%s': %d\n", str1, str2, my_strcmp(str1, str2));
    printf("Comparing '%s' and '%s': %d\n", str1, str3, my_strcmp(str1, str3)); 
    printf("Comparing '%s' and '%s': %d\n", str3, str1, my_strcmp(str3, str1)); 
    printf("Comparing '%s' and '%s': %d\n", str1, str4, my_strcmp(str1, str4)); 

    return 0;
}