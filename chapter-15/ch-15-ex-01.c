#include <stdio.h>

int pow2(int p) {
    int r = 1;
    for (int i = 0; i < p; i++) {
        r *= 2;
    }
    return r;
}

int main() {
    char * pbin = "01001001";
    int p = 0;

    char ch;
    int stop = 0;

    int power = 0;

    do {
        ch = pbin[stop++];
    } while (ch != '\0');
    stop -= 2;

    for (int i = stop; i >= 0; i--) {
        ch = pbin[i];

        if (ch == '1') {
            p += pow2(power);
        }

        power++;
    }

    printf("Двоичное \"%s\" == Десятичному \"%i\"\n", pbin, p);

    return 0;
}