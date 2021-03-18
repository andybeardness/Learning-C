#include <stdio.h>

#define MAX 26

int main() {
    char ch = 'a';
    char chm[MAX];

    for (int i = 0; i < MAX; i++) {
        chm[i] = ch++;
    }

    for (int i = 0; i < MAX; i++) {
        printf("char # %i == %c\n", i, chm[i]);
    }

    return 0;
}