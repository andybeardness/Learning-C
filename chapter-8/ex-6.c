#include <stdio.h>

char get_first();

int main() {
    int ch;

    printf("Вводите символы, пока не введёте пробел, \n"
           "на этом программа должна завершиться:\n");

    ch = get_first();

    printf("INTовый код вашего пробела : %i", ch);

    return 0;
}

char get_first() {
    int ch;

    while ( (ch = getchar()) != ' ' ) {
        continue;
    }

    return ch;
}