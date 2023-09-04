#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define MAX_LENGTH 100

int is_digit(char c) {
    return isdigit(c);
}

int distinct_year(const char *str) {
    char str2[5];
    int year_count = 0;
    int i, j;
    int years[10000] = {0}; 

    for (i = 0; str[i] != '\0'; i++) {
        if (is_digit(str[i])) {
            str2[0] = str[i];
            for (j = 1; is_digit(str[i + j]) && j < 4; j++) {
                str2[j] = str[i + j];
            }
            str2[j] = '\0'; 
            if (strlen(str2) == 4) {
                int year = (int)strtol(str2, NULL, 10);
                if (year >= 1000 && year <= 9999 && years[year] == 0) {
                    years[year] = 1;
                    year_count++;
                }
            }
        }
    }

    return year_count;
}

int main() {
    char str[MAX_LENGTH];
    fgets(str, sizeof(str), stdin);

    int count = distinct_year(str);
    printf("%d\n", count);

    return 0;
}
