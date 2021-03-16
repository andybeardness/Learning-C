#include <stdio.h>

#define LEN 100

void init_arr(char * array);
void add_char(char array[], char ch, int counter);
void show_arr(char array[]);

int main() {
    char charray[LEN];
    char ch;
    int counter = 0;

    init_arr(charray);

    printf("Вводите символы, пока не введёте 100 штуки или символ \"#\":\n");
    while ((ch = getchar()) != '#' && counter < LEN) {
        add_char(charray, ch, counter);
        counter++;
    }

    show_arr(charray);

    return 0;
}

void init_arr(char * array) {
    for (int c = 0; c < LEN; c++)
        array[c] = '#';
}

void add_char(char * array, char ch, int counter) {
    array[counter] = ch;
}

void show_arr(char array[]) {
    for (int c = 0; c < LEN; c++) {
        if (array[c] == '#')
            break;
        printf("Символ номер № %i : %c\n", c, array[c]);
    }
}