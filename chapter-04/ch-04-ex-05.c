#include <stdio.h>
#include <string.h>

int main() {
    char name_one[11], name_two[11];
    size_t len_one, len_two;

    printf("Введите первое имя (максимум 10 символов) : ");
    scanf("%s", name_one);

    printf("Введите второе имя (максимум 10 символов) : ");
    scanf("%s", name_two);

    len_one = strlen(name_one);
    len_two = strlen(name_two);

    printf("%10s %10s\n%10i %10i\n",
           name_one, name_two,
           len_one, len_two);

    printf("\n\n");

    printf("%10s %10s\n%-10i %-10i\n",
           name_one, name_two,
           len_one, len_two);

    return 0;
}