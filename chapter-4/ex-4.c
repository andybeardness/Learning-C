#include <stdio.h>

int main() {
    char name[42];
    float height;

    printf("Введите ваше имя      : ");
    scanf("%s", name);

    printf("Введите ваш рост (см) : ");
    scanf("%f", &height);

    printf("%s, ваш рост %1.3f метров", name, height / 100);

    return 0;
}