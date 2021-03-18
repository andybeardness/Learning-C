#include <stdio.h>
#include <string.h>

#define LEN 255

int main() {
    char word[LEN];

    printf("Напишите строку (длина не более 255 символов) : ");

    scanf("%s", word);

    printf("Она же, но в обратном порядке                 : ");

    for (unsigned long i = (int) strlen(word) - 1; i < strlen(word) ; i--) {
        printf("%c", word[i]);
    }

    return 0;
}