#include <stdio.h>

int fibo(int steps);

int main() {
    printf(" 5-ое число фибоначи : %i\n", fibo(5));
    printf("15-ое число фибоначи : %i\n", fibo(15));
    printf("25-ое число фибоначи : %i\n", fibo(25));
    printf("35-ое число фибоначи : %i\n", fibo(35));

    return 0;
}

int fibo(int steps) {
    int old = 0;
    int new = 1;
    int temp;

    for (int s = 0; s < steps; s++) {
        temp = new + old;
        old = new;
        new = temp;
    }

    return temp;
}