#include <stdio.h>
#include <float.h>

int main() {
    float f = 1.0f / 3.0f;
    double d = 1.0 / 3.0;

    printf("4 знака после запятой\n");
    printf("float  == %.4f\n", f);
    printf("double == %.4f\n", d);

    printf("\n\n");

    printf("12 знаков после запятой\n");
    printf("float  == %.12f\n", f);
    printf("double == %.12f\n", d);

    printf("\n\n");

    printf("16 знаков после запятой\n");
    printf("float  == %.16f\n", f);
    printf("double == %.16f\n", d);

    printf("\n\n");

    printf("FLT_DIG == %d\n", FLT_DIG);
    printf("DBL_DIG == %d\n", DBL_DIG);

    return 0;
}