#include <stdio.h>

int get_sum(int a, int b); // Сложение двух чисел через инеремент
int get_mul(int a, int b); // Умножение двух чисел c помощью get_sum
int get_pow(int a, int b); // Возведение в степень двух чисел с помощью get_mul

/*
 * Вывод программы :
 * -------------------------------------------------------------
 *
 * Введите число "а" : 11
 * Введите число "b" : 4
 * 
 * 
 * a == 11, b == 4
 *
 * a + b  == 15
 * a * b  == 44
 * a ** b == 14641
 *
 * -------------------------------------------------------------
 */
int main() {
    int a;
    int b;

    printf("Введите число \"а\" : ");
    scanf("%i", &a);

    printf("Введите число \"b\" : ");
    scanf("%i", &b);

    printf("\n\n");
    printf("a == %i, b == %i\n\n", a, b);

    printf("a + b  == %i\n", get_sum(a, b));
    printf("a * b  == %i\n", get_mul(a, b));
    printf("a ** b == %i\n", get_pow(a, b));

    return 0;
}

int get_sum(int a, int b) {
    int result = a;
    for (int i = 0; i < b; i++) {
        result++;
    }

    return result;
}

int get_mul(int a, int b) {
    int result = 0;
    for (int i = 0; i < b; i++) {
        result = get_sum(result, a);
    }

    return result;
}

int get_pow(int a, int b) {
    int result = 1;
    for (int i = 0; i < b; i++) {
        result = get_mul(result, a);
    }

    return result;
}