#include <stdio.h>

#define WELCOME_STR "Введите Имя и Фамилию через пробел (прим. \"Иван Иванов\", без кавычек)\n"
#define NAME   "Имя     : "
#define FAMILY "Фамилия : "


int main() {
    char name[42], family[42];

    printf(WELCOME_STR);

    printf(NAME);
    scanf("%s", name);

    printf(FAMILY);
    scanf("%s", family);

    printf("%s, %s", family, name);

    return 0;
}