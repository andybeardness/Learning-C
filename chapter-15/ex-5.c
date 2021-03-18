#include <stdio.h>

int rotate(int bin, int rot);

int main() {
    int a = 42;

    int r1 = 4;
    int r2 = -5;
    int r3 = 0;

    printf("Сдвиг числа %3d на %3d : %3d\n", a, r1, rotate(a, r1));
    printf("Сдвиг числа %3d на %3d : %3d\n", a, r2, rotate(a, r2));
    printf("Сдвиг числа %3d на %3d : %3d\n", a, r3, rotate(a, r3));

    return 0;
}

int rotate(int bin, int rot) {
    if (rot > 0) {
        return bin >> rot;
    }
    else if (rot < 0) {
        return bin << rot;
    }
    else {
        return bin;
    }
}