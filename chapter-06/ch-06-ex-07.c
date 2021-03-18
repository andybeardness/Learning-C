#include <stdio.h>

double get_max(double a, double b)        { return a > b ? a : b; }
double get_min(double a, double b)        { return a < b ? a : b; }
double get_diff(double max, double min)   { return max - min;     }
double get_mull(double a, double b)       { return a * b;         }
double get_div(double top, double bottom) { return top / bottom;  }

int main() {
    double a, b;
    double result;

    while (1) {

        printf("Введите первое число с плавающей точкой : ");
        if (scanf("%lf", &a) != 1) {
            break;
        }

        printf("Введите второе число с плавающей точкой : ");
        if (scanf("%lf", &b) != 1) {
            break;
        }

        result = get_div(
                get_diff( get_max(a, b) , get_min(a, b) ),
                get_mull(a, b)
        );

        printf("                        Результат равен : %lf\n\n", result);
    }

    return 0;
}
