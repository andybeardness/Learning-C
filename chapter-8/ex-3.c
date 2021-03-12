#include <stdio.h>

int main() {
    char ch;
    char a = 'a', z = 'z',
         A = 'A', Z = 'Z';

    int count_down = 0;
    int count_up = 0;

    printf("Вводите символы, в конце пока не введёте сивмол \'#\',\n"
           "после чего программа посчитает кол-во символов\n"
           "верхнего и нижнего регистров:\n");

    while ( (ch = getchar())  != '#') {
        if (ch >= a && ch <= z) count_down++;
        if (ch >= A && ch <= Z) count_up++;
    }

    printf("Количество симолов верхнего регистра : %i\n", count_up);
    printf("Количество симолов нижнего регистра  : %i\n", count_down);

    return 0;
}