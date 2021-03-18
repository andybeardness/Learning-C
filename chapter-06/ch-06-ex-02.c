#include <stdio.h>

#define LEN 5

int main() {
    char ch = '$';

    for (int i = 1; i <= LEN; i++) {
        for (int j = 0; j < i; j++) {
            printf("%c", ch);
        }
        printf("\n");
    }

    return 0;
}