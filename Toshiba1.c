#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define MAX_LENGTH 100

int is_digit(char c) {
    return isdigit(c);
}

int distinct_year(const char *str) {
    char str2[5]; // To store potential years
    int year_count = 0;
    int i, j;

    for (i = 0; str[i] != '\0'; i++) {
        if (is_digit(str[i])) {
            str2[0] = str[i];
            for (j = 1; is_digit(str[i + j]) && j < 4; j++) {
                str2[j] = str[i + j];
            }
            str2[j] = '\0'; // Null-terminate the potential year

            if (strlen(str2) == 4) {
                // Check if the potential year has 4 digits
                int year = (int)strtol(str2, NULL, 10);
                if (year >= 1000 && year <= 9999) {
                    year_count++;
                }
            }
        }
    }

    return year_count;
}

int main() {
    char str[MAX_LENGTH]; // Assuming a maximum input string length

    // printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int count = distinct_year(str);
    printf("%d\n", count);

    return 0;
}