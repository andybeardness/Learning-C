#include <stdio.h>
#include <string.h>

int main() {
    char word[100];
    unsigned long len;

    printf("Напиши слово (до 100 символов) : ");
    scanf("%s", word);

    len = strlen(word);

    printf("В обратную сторону             : ");

    unsigned long i = len - 1;
    do {
        printf("%c", word[i--]);
    } while (i < len);

    return 0;
}