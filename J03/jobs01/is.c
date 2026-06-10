#include <stdio.h>

int is_digit(char c) {
    if (c >= '0' && c <= '9') {
        return 1; // true
    } else {
        return 0; // false
    }
}

int is_lower(char c){
    int c_ascii = (int)c;
    if (c_ascii >= 97 && c_ascii <= 122) {
        return 1; // true
    } else {
        return 0; // false
    }
}

int is_upper(char c){
    int c_ascii = (int)c;
    if (c_ascii >= 65 && c_ascii <= 90) {
        return 1; // true
    } else {
        return 0; // false
    }
}

int is_alpha(char c){
    if (is_lower(c) || is_upper(c)) {
        return 1; // true
    } else {
        return 0; // false
    }
}

int is_print(char c){
    int c_ascii = (int)c;
    if (c_ascii >= 32 && c_ascii <= 126) {
        return 1; // true
    } else {
        return 0; // false
    }
} 

int main() {
    char a = 'A';
    char b = 'a';
    char c = '5';
    char d = ' ';
    printf("is_digit('%c') = %d\n", a, is_digit(a));
    printf("is_digit('%c') = %d\n", b, is_digit(b));
    printf("is_digit('%c') = %d\n", c, is_digit(c));
    printf("is_digit('%c') = %d\n", d, is_digit(d));
    printf("is_lower('%c') = %d\n", a, is_lower(a));
    printf("is_lower('%c') = %d\n", b, is_lower(b));
    printf("is_lower('%c') = %d\n", c, is_lower(c));
    printf("is_lower('%c') = %d\n", d, is_lower(d));
    printf("is_upper('%c') = %d\n", a, is_upper(a));
    printf("is_upper('%c') = %d\n", b, is_upper(b));
    printf("is_upper('%c') = %d\n", c, is_upper(c));
    printf("is_upper('%c') = %d\n", d, is_upper(d));
    printf("is_alpha('%c') = %d\n", a, is_alpha(a));
    printf("is_alpha('%c') = %d\n", b, is_alpha(b));
    printf("is_alpha('%c') = %d\n", c, is_alpha(c));
    printf("is_alpha('%c') = %d\n", d, is_alpha(d));
    printf("is_print('%c') = %d\n", a, is_print(a));
    printf("is_print('%c') = %d\n", b, is_print(b));
    printf("is_print('%c') = %d\n", c, is_print(c));
    printf("is_print('%c') = %d\n", d, is_print(d));
}