#include <stdio.h>

int main() {
    int list[8];

    printf("Введите восемь (8) целых чисел через пробел : ");

    scanf("%i %i %i %i %i %i %i %i",
            &list[0],
            &list[1],
            &list[2],
            &list[3],
            &list[4],
            &list[5],
            &list[6],
            &list[7]
    );

    printf("                     В обратном порядке они : ");

    for (int i = 7; i >= 0; i--) {
        printf("%i ", list[i]);
    }

    return 0;
}
