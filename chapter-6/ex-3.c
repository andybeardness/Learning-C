#include <stdio.h>

#define LEN 6

int main() {
    char ch;

    for (int i = 1; i <= LEN; i++) {
        ch = 'F';
        for (int j = 0; j < i; j++) {
            printf("%c", ch--);
        }
        printf("\n");
    }

    return 0;
}