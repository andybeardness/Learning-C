#include <stdio.h>

#define LEN 100

char * get_ptr_char(char * words, char ch);

int main() {
    char string[] = "Never gonna give you up";
    char *ch;
    char find = 'i';

    ch = get_ptr_char(string, find);

    printf("Найденная буква \"%c\" в строке \"%s\" : \"%c\"", find, string, *ch);

    return 0;
}

char * get_ptr_char(char * words, char ch) {
    for (int c = 0; c < LEN; c++) {
        if (words[c] == ch)
            return &words[c];
    }
}
