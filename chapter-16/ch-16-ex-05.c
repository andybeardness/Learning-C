#include <stdio.h>
#include "H-ch-16-all.h"

int main() {
    int array[] = {1, 2, 3, 4, 5, 6, 7};

    printf("Первое место занимет участник под номером    № %d\n", GET_RANDOM_ELEMENT(array));
    printf("Второе место занимет участник под номером    № %d\n", GET_RANDOM_ELEMENT(array));
    printf("Третье место занимет участник под номером    № %d\n", GET_RANDOM_ELEMENT(array));
    printf("Четвёртое место занимет участник под номером № %d\n", GET_RANDOM_ELEMENT(array));

    return 0;
}