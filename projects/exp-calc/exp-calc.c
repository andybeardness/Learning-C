#include <stdio.h>


double exp_bsc();
double exp_stp(short stop);

double factorial(short s);

/*
 * Пример работы:
 * -------------------------------------------------------------
 *
 * Exp Basic (32) == 2.7182818284590455348848081484902650117874 || 2.718282e+00
 *
 * Exp Stop 16    == 2.7182818284582301870955234335269778966904 || 2.718282e+00
 * Exp Stop 4     == 2.5000000000000000000000000000000000000000 || 2.500000e+00
 * Exp Stop 2     == 1.0000000000000000000000000000000000000000 || 1.000000e+00
 *
 * -------------------------------------------------------------
 */

/**
 *
 * Пример функции, которая считать эскпоненту "на лету"
 * через формулу суммы
 *
 * Формулу взял отсюда:
 * https://en.wikipedia.org/wiki/E_(mathematical_constant)
 *
 * @return 0
 */
int main() {
    short stop16   = 16; // ограничитель в 16 итераций
    short stop4    = 4;  // ограничитель в 4  итерации
    short stop2    = 2;  // ограничитель в 2  итерации

    double e      = exp_bsc();       // базовая экспонента       : 32 итерации (до 40го знака после запятой)
    double e_16   = exp_stp(stop16); // ограниченнная экспонента : 16 итераций
    double e_4    = exp_stp(stop4);  // ограниенная экспонента   : 4 итерации
    double e_2    = exp_stp(stop2);  // ограниенная экспонента   : 2 итерации

    // Результаты работы
    printf("Exp Basic (32) == %.40f || %e\n\n", e,    e);
    printf("Exp Stop 16    == %.40f || %e\n",   e_16, e_16);
    printf("Exp Stop 4     == %.40f || %e\n",   e_4,  e_4);
    printf("Exp Stop 2     == %.40f || %e\n",   e_2,  e_2);

    return 0;
}

/**
 * Базовая версия вычисления экспоненты
 * (ограничение == 32 итерациям)
 *
 * Не принимает аргументов
 * Возвоащает тип double
 *
 * @return double
 */
double exp_bsc() {
    double e = 0.;

    for (short s = 1; s < 32; s++) {
        e += 1. / factorial(s);
    }

    return e;
}

/**
 * Ограниченная версия вычисления экспоненты
 * (ограничение задаётся пользователем через аргумент)
 *
 * Один аргумент типа short (этого должно быть достаточно)
 * Возвоащает тип double
 *
 * @param stop -- ограничение
 * @return double
 */
double exp_stp(short stop) {
    double e = 0.;

    for (short s = 1; s < stop; s++) {
        e += 1. / factorial(s);
    }

    return e;
}

/**
 * Функция считает факториал числа
 *
 * Лёгкая реализация за счёт входного параметра типа double
 * Принял такое решение, так как создавал ф-ю только для вычисления экспоненты 
 *
 * @param s -- число, факториал которого нужно посчитать
 * @return
 */
double factorial(short s) {
    double f = 1.;

    for (short ss = 1; ss < s; ss++) {
        f *= ss;
    }

    return f;
}