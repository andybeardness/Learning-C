#include <stdio.h>

int main() {
    char ch;
    char a = 'a', z = 'z',
         A = 'A', Z = 'Z';

    int count_words = 0;
    int summ_chars = 0;

    int current_word_len = 0;

    int is_word = 0;

    double mean;

    printf("Вводите символы, в конце пока не введёте сивмол \'#\',\n"
           "после чего программа посчитает среднее количество\n"
           "букв на слово :\n");

    while ( (ch = getchar())  != '#') {
        if ( (ch >= a && ch <= z) || (ch >= A && ch <= Z) ) {
            is_word = 1;
            current_word_len++;
        }
        else if (ch == ' ' || ch == '\n' || ch == '\t') {
            if (is_word == 1) {
                is_word = 0;
                count_words++;
                summ_chars += current_word_len;
                current_word_len = 0;
            }
        }
    }

    mean = (double)summ_chars / (double)count_words;

    printf("Среднее количество букв на слово : %.2lf\n", mean);

    return 0;
}