#include <stdio.h>

int main() {
    char name[42];

    printf("Введите имя: ");
    scanf("%s", name);

    printf("\"%s\"\n", name);
    printf("\"%20s\"\n", name);
    printf("\"%-20s\"\n", name);

    printf(
        "\"   "
        "%s"
        "\"\n", name
    );

    return 0;
}