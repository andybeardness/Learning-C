#include <stdio.h>

int main() {
    int enter;
    int max_enter;

    printf("Введите число : ");
    scanf("%i", &enter);

    max_enter = enter + 10;

    while(enter <= max_enter) {
        printf("Число == %i\n", enter);
        enter++;
    }

    return 0;
}