#include <stdio.h>

#define LEN 10000

int main() {
    char ch;
    char array[LEN];
    int c = 0;
    int c_newline = 0;

    printf("Введите текст:\n");

    while ((ch = getchar()) != '#') {
        array[c++] = ch;

        if (ch == '\n') {
            c_newline++;
        }

        if (c_newline == 10) {
            break;
        }
    }

    array[c] = '\0';

    printf("vvvv Вы ввели следующее vvvv\n");
    printf("%s", array);

    return 0;
}