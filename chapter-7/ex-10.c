#include <stdio.h>

int main() {
    int choice;
    double limit, money, taxes;


    while (1) {
        printf("Привет, выбрери свою категорию:                                      \n"
               "1) Одинокий                         2) Глава семьи                   \n"
               "3) В браке (совместное хозяйство)   4) В браке (раздельное хозяйство)\n"
               "5) Выход                                                             \n");

        printf("Введи номер : ");
        scanf("%i", &choice);

        switch (choice) {
            case 1: limit = 17850; break;
            case 2: limit = 23900; break;
            case 3: limit = 29750; break;
            case 4: limit = 14875; break;
            case 5: goto exit;
            default : goto exit;
        }

        printf("Теперь введи свою зарплату в $ (например 20000): ");
        scanf("%lf", &money);

        taxes = 0.15 * limit + 0.28 * (money - limit);

        printf("\n"
               "Итого ты заплатишь $ %.2lf налогов\n\n"
               "Можешь попробовать еще\n\n", taxes);

    }

    exit: return 0;
}