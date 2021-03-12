#include <stdio.h>

int main() {
    char ch;
    int count = 0;

    printf("Вводите символы, в конце пока не введёте сивмол \'#\',\n"
           "после чего программа посчитает кол-во символов:\n");

    while ( (ch = getchar())  != '#') {
        count++;
    }

    printf("Количество симолов равно %i", count);

    return 0;
}