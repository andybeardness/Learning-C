#include <stdio.h>

int get_sum(int a, int b); // Сложение двух чисел через инеремент
int get_mul(int a, int b); // Умножение двух чисел c помощью get_sum 
int get_pow(int a, int b); // Возведение в степень двух чисел с помощью get_mul

/*
 * Вывод программы :
 * -------------------------------------------------------------
 *
 * a == 8, b == 5
 * 
 * a + b  == 13
 * a * b  == 40
 * a ** b == 32768
 *
 * -------------------------------------------------------------
 */
int main() {
    int a = 8;
    int b = 5;

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