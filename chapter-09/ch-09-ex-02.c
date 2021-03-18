#include <stdio.h>

void chline(char ch, int i, int j);

int main() {
    int i, j;
    char ch = '*';

    printf("Введите количество строк и столбцов через пробел: ");
    scanf("%i %i", &i, &j);

    chline(ch, i, j);

    return 0;
}

void chline(char ch, int i, int j) {
    for (int ii = 0; ii < i; ii++) {
        for (int jj = 0; jj < j; jj++) {
            printf("%c", ch);
        }
        printf("\n");
    }
}