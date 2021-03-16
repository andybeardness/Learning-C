#include <stdio.h>

#define COUNT 108

int count = 0;

void func();

int main() {

    for (int i = 0; i < COUNT; i++)
        func();

    printf("Функция func вызывалась %i раз\n", count);

    return 0;
}

void func() {
    count++;
}