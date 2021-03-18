#include <stdio.h>
#include <stdlib.h>

#define TOTAL_LEN 1000

int main() {
    int c, g, k;
    int r;

    int total[TOTAL_LEN], t = 0;

    printf("Введите кол-во бросаний кубиков или \"-1\" для выхода : ");
    scanf("%d", &c);

    if (c == -1) return 0;

    printf("Введите количество граней и костей : ");

    scanf("%d %d", &g, &k);

    for (int i = 0; i < c; i++) {
        for (int j = 0; j < k; j++) {
            r = rand() % (g - 1) + 1;
            total[t++] = r;
        }
    }

    printf("Имеем %i бросаний %i %i-гранных костей: \n", c, k, g);

    for (int i = 0; i < t; i++)
        printf("%i - ", total[i]);

    printf("\b\b\b \n\n");

    return 0;
}