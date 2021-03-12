#include <stdio.h>

int main() {
    int spaces = 0;
    int newlines = 0;
    int others = 0;

    char ch;

    printf("Вводите разные символы, пока не введёте символ \'#\':\n");

    while ((ch = getchar()) != '#') {
        if (ch == ' ') spaces++;
        if (ch == '\n') newlines++;
        else others++;
    }

    printf("Количество пробелов         : %5i\n"
           "Количество переносов строки : %5i\n"
           "Количество других символов  : %5i\n", spaces, newlines, others);

    return 0;
}