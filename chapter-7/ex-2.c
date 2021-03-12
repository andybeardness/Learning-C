#include <stdio.h>

#define DELIMITER 8

void makezero(char * charray);
void showchars(char charray[]);

int main() {
    char ch;
    int counter = 0;
    char charray[8];

    printf("Вводите символы, каждые 8 символов будет выдаваться сводка по введённым символам: \n");

    while ((ch = getchar()) != '#') {

        charray[counter] = ch;

        if (++counter == DELIMITER) {
            putchar('\n');
            showchars(charray);
            makezero(charray);
            counter = 0;
        }
    }

    return 0;
}

void makezero(char * charray) {
    for (int i = 0; i < DELIMITER; i++) {
        charray[i] = 0;
    }
}

void showchars(char charray[]) {
    for (int i = 0; i < DELIMITER; i++) {
        printf("| %c | %4i | \n", charray[i], charray[i]);
    }
}