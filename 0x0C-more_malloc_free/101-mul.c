#include <stdio.h>
#include <stdlib.h>

int is_digit(char c) {
    return (c >= '0' && c <= '9');
}

int main(int argc, char *argv[]) {
    char *num1_str;
    char *num2_str;
    long num1, num2, result;
    int i;

    if (argc != 3) {
        printf("Error\n");
        return 98;
    }

    num1_str = argv[1];
    num2_str = argv[2];

    for (i = 0; num1_str[i] != '\0'; i++) {
        if (!is_digit(num1_str[i])) {
            printf("Error\n");
            return 98;
        }
    }

    for (i = 0; num2_str[i] != '\0'; i++) {
        if (!is_digit(num2_str[i])) {
            printf("Error\n");
            return 98;
        }
    }

    num1 = atol(num1_str);
    num2 = atol(num2_str);

    result = num1 * num2;

    printf("%ld\n", result);

    return 0;
}

