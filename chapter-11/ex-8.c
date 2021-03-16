#include <stdio.h>

#define LEN 100

char * string_in(char * s1, char * s2);
int len_str(char * s);

int main() {
    char s1[LEN] = "HATS";
    char s2[LEN] = "AT";
    char * ch;

    ch = string_in(s1, s2);

    printf("ch == %s", ch);

    return 0;
}

char * string_in(char * s1, char * s2) {
    int len_s1 = len_str(s1);
    int len_s2 = len_str(s2);
    int c2 = 0;
    char null = '\0';
    char * ptr = &null;

    if (len_s1 == -1 || len_s2 == -1)
        return "Что-то не так со строками!\n";

    for (int c1 = 0; c1 < len_s1; c1++) {
        if (s1[c1] == s2[c2]) {
            if (c2 == 0)
                ptr = &s1[c1];
            if (c2 == len_s2)
                return ptr;
            c2++;
        }
        else {
            c2 = 0;
        }
    }
    return ptr;
}

int len_str(char * s) {
    for (int c = 0; c < LEN; c++) {
        if (s[c] == '\0') return c;
    }
    return -1;
}
