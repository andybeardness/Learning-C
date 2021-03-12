#include <stdio.h>

int main() {
    int was_e = 0;
    int is_i = 0;

    char ch;

    int count = 0;

    while((ch = getchar()) != '#') {
        if (ch == 'e') {
            was_e = 1;
        }
        else if (was_e == 1 && ch == 'i') {
            is_i = 1;
        }
        else {
            was_e = 0;
            is_i = 0;
        }

        if (is_i) {
            is_i = 0;
            count++;
        }
    }

    printf("Последовательность \'ei\' встретилась %i раз", count);

    return 0;
}