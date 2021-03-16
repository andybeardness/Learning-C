#include <stdio.h>

#define LEN 100

char * strncpy(char * s1, char * s2, int n);

int main() {
    char s1[LEN] = "What are you doing?";
    char s2[LEN] = "I'm learning C instead Android, LMAO";
    int n = 10;

    printf("Строка № 1 ДО преобразования : \"%s\"\n", s1);
    printf("Строка № 2 ДО преобразования : \"%s\"\n", s2);

    strncpy(s1, s2, n);

    printf("Строка № 1 ПОСЛЕ преобразования : \"%s\"\n", s1);

    return 0;
}

char * strncpy(char * s1, char * s2, int n) {
    for (int c = 0; c < n; c++) {
        s1[c] = s2[c];
    }
    return s1;
}
