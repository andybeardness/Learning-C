#include <stdio.h>

int main() {
    char ch;
    int counter = 0;

    printf("Вводите символы, в том числе символ точки и знаков вопроса :\n");

    while((ch = getchar()) != '#') {
        if (ch == '.') {
            putchar('\b');
            putchar('!');
            counter++;
        } else if (ch == '!') {
            putchar('\b');
            putchar('\b');
            putchar('!');
            putchar('!');
            counter++;
        }
    }

    return 0;
}