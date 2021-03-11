#include <stdio.h>

#define MAX 26

int is_quit(char ch);
int ch_is_valid(char ch);
int get_space(char ch);
void print_space(int spaces);
void print_charline(char center);

int main() {
    char ch;
    int space;

    int run = 1;

    while (run) {
        printf("Введите заглавный символ латинского алфавита: ");
        scanf("%c%c", &ch);

        if (is_quit(ch)) break;
        if (!ch_is_valid(ch)) continue;

        space = get_space(ch);

        for (char symb = 'A'; symb != ch + 1; symb++) {
            print_space(space);
            print_charline(symb);
            print_space(space);
            printf("\n");
            space -= 1;
        }

    }

    return 0;
}

int is_quit(char ch) {
    return ch == 'q' ? 1 : 0;
}

int ch_is_valid(char ch) {
    char A = 'A';
    int is_valid = 0;

    for (int i = 0; i < MAX; i++) {
        if (ch == A++) {
            is_valid = 1;
        }
    }

    return is_valid;
}

int get_space(char ch) {
    char A = 'A';
    int space = 0;

    while(A != ch) {
        space++;
        A++;
    }

    return space;
}

void print_space(int spaces) {
    for (int i = 0; i < spaces; ++i) {
        printf(" ");
    }
}

void print_charline(char center) {
    for (char ch = 'A'; ch != center + 1; ch++) {
        printf("%c", ch);
    }
    for (char ch = center - 1; ch != 'A' - 1; ch--) {
        printf("%c", ch);
    }
}