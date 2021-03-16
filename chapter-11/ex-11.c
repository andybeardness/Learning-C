#include <stdio.h>

int get_count_low(char * array);
int get_count_high(char * array);

int main() {
    char * array = "This is __-  My  TexT!";

    int count_low = get_count_low(array);
    int count_high = get_count_high(array);

    printf("В тексте:\n");
    printf("\t\t кол-во букв нижнего регистра   : %i\n", count_low);
    printf("\t\t кол-во букв верхнего регистра  : %i\n", count_high);

    return 0;
}

int get_count_low(char * array) {
    int counter = 0;

    for (int c = 0; c < LEN; c++) {
        if (array[c] >= 'a' && array[c] <= 'z') {
            counter++;
        }
    }

    return counter;
}

int get_count_high(char * array) {
    int counter = 0;

    for (int c = 0; c < LEN; c++) {
        if (array[c] >= 'A' && array[c] <= 'Z') {
            counter++;
        }
    }

    return counter;
}
