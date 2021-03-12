#include <stdio.h>

int main() {
    int find_number;
    int number = 50;
    int choice;
    int down = 0, up = 101;

    printf("Загадайте число от 1 до 100: ");
    scanf("%i", &find_number);

    while (number != find_number) {
        printf("Ваше число больше или меньше %i ?\n"
               "1 - меньше\n"
               "2 - больше\n", number);

        scanf("%i", &choice);

        switch (choice) {
            case 1:
                up = number;
                number -= (up - down) / 2;
                break;
            case 2:
                down = number;
                number += (up - down) / 2;
                break;
            default:
                printf("Такого варианта нет, попробуй еще\n");
                break;
        }
    }

    printf("Угадал, это число == %i !\n", number);
    return 0;
}