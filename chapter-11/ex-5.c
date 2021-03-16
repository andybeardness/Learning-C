#include <stdio.h>

#define LEN 100

int is_within(char * word, char ch);

int main() {
    char word_1[LEN] = "Never gonna give you up!";
    char word_2[LEN] = "Never gonna let you down";
    char find = 'd';

    printf("Содержится ли буква \"%c\" во фразе : \"%s\" ? \n\t\t Ответ : %i\n\n", find, word_1, is_within(word_1, find));
    printf("Содержится ли буква \"%c\" во фразе : \"%s\" ? \n\t\t Ответ : %i\n\n", find, word_2, is_within(word_2, find));

    return 0;
}

int is_within(char * word, char ch) {
    for (int c = 0; c < LEN; c++) {
        if (word[c] == ch) {
            return 1;
        }
    }
    return 0;
}
