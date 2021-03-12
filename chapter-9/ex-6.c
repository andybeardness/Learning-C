#include <stdio.h>

int char_number(char ch);

int main() {
    char ch = 0;

    while (1) {
        printf("Введите символ : ");
        ch = getchar();

        if (ch == '#') break;

        printf("Номер буквы    : %i\n\n", char_number(ch));

    }

    return 0;
}

int char_number(char ch) {
    int number = -1;

    if (ch >= 'a' && ch <= 'z') {
        number = (int)(ch - 'a') + 1;
    }
    else if (ch >= 'A' && ch <= 'Z') {
        number = (int)(ch - 'A') + 1;
    }

    return number;
}
