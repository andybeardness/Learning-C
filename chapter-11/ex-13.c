#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char * argv[]) {
    double base;
    int p;

    if (argc != 3) return 1;

    base = atof(argv[1]);
    p = atoi(argv[2]);

    printf("%5.2lf в степени %i == %5.2lf", base, p, pow(base, (double) p));

    return 0;
}