// ----------------------------------
// -------------- EX 2 --------------
// ----------------------------------

#define GARMONIC(...) garmonic(__VA_ARGS__)

/*
 * Тут есть одна ошибка, которую я пока не понял как исправить
 * Но судя по туториалам при другом компиляторе Си -- всё должно работать норм
 */
int garmonic(double a, ...) {
    double *p = &a;
    int count = 0;
    double inv_sum = 0;
    double inv, inv_mean, res;

    while (*p) {
        inv = 1. / *p;
        inv_sum += inv;

        count++;
        p++;
    }

    inv_mean = inv_sum / count;
    res = 1. / inv_mean;
    return res;
}

// ----------------------------------
// -------------- EX 3 --------------
// ----------------------------------

#include <math.h>

#define POLAR_TO_XY(RA) polar_to_xy(RA)

typedef struct polar {
    double R;
    double A;
} polar;

typedef struct xy {
    double X;
    double Y;
} xy;

xy polar_to_xy(polar p) {
    xy c;

    c.X = p.R * cos(p.A);
    c.Y = p.R * sin(p.A);

    return c;
}

// ----------------------------------
// -------------- EX 4 --------------
// ----------------------------------

#include <time.h>

#define WAIT(SEC) wait(SEC)

void wait(unsigned long sec) {
    clock_t start = clock();
    clock_t stop;
    unsigned long  between;

    do {
        stop = clock();
        between = (stop - start) / CLOCKS_PER_SEC;
    } while(between < sec);
}

// ----------------------------------
// -------------- EX 5 --------------
// ----------------------------------

#include <stdlib.h>

#define GET_RANDOM_ELEMENT(ARRAY) get_random_element(ARRAY)

int get_random_element(int array[]) {
    size_t len = sizeof(array) / sizeof(array[0]);
    unsigned long r;

    unsigned long seed = clock();
    srand(seed);

    r = rand();
    r = r % len;

    return array[r];
}

// ----------------------------------
// -------------- EX 7 --------------
// ----------------------------------

#include <stdio.h>

#define SHOW_ARRAY(AR, N) show_array(AR, N)
#define NEW_D_ARRAY(N, ...) new_d_array(N, __VA_ARGS__)

void show_array(const double ar[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%5.2lf - ", ar[i]);
    }
    printf("\b\b\b \n");
}

double * new_d_array(int n, double d, ...) {
    double * array = malloc(n * sizeof(double));
    double *p = &d;
    int c = 0;

    while(*p) {
        *(array + c) = *p;
        p++;
    }

    return array;
}
