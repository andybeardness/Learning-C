#include <stdio.h>

#define FREEMASS       100.00
#define FREEMASSVALUE    0.05
#define MASSBOTTOM5      3.50
#define MASSFROM5TO20   10.00
#define MASSMORE20       8.00
#define MASSMORE20PLUS   0.10

int main() {
    const double price_perf_a = 1.25;
    const double price_perf_b = 0.65;
    const double price_perf_c = 0.89;

    int choice;

    double
            mass_a = 0,
            mass_b = 0,
            mass_c = 0;

    double mass;

    double price_a, price_b, price_c;
    double price, price_total;

    double price_way, way_plus;

    while (1) {

        printf("\n\n"
               "== ==== ==== ==== ==\n"
               "==      МЕНЮ      ==\n"
               "== ==== ==== ==== ==\n"
               "Выберите вариант, который хотите выполнить\n"
               "1) Ввести вес артишоков в фунтах . . . (%.2lf)\n"
               "2) Ввести вес свеклы в фунтах  . . . . (%.2lf)\n"
               "3) Ввести вес моркови в фунтах . . . . (%.2lf)\n"
               "4) Посчитать\n"
               "5) Выход\n\n",
               mass_a,
               mass_b,
               mass_c);

        printf("Ваш вариант : ");
        scanf("%i", &choice);

        switch (choice) {
            case 1:
                printf("Введите вес артишоков в фунтах : ");
                scanf("%lf", &mass_a);
                break;

            case 2:
                printf("Введите вес свеклы в фунтах    : ");
                scanf("%lf", &mass_b);
                break;

            case 3:
                printf("Введите вес моркови в фунтах   : ");
                scanf("%lf", &mass_c);
                break;

            case 4:
                price_a = price_perf_a * mass_a;
                price_b = price_perf_b * mass_b;
                price_c = price_perf_c * mass_c;

                price = price_a + price_b + price_c;

                if (price > FREEMASS) {
                    price_total = price - price * FREEMASSVALUE;
                } else {
                    price_total = price;
                }

                mass = mass_a + mass_b + mass_c;

                if (mass <= 5.0) {
                    price_way = MASSBOTTOM5;
                    way_plus = 0;
                } else if (mass > 5.0 && mass <= 20.0) {
                    price_way = MASSFROM5TO20;
                    way_plus = 0;
                } else if (mass > 20.0) {
                    price_way = MASSMORE20;
                    way_plus = (mass - 20.0) * MASSMORE20PLUS;
                }

                printf("\n\n"
                       "Суммарный вес заказа                : %.2lf\n"
                       "\t\tВес артишоков : %.2lf\n"
                       "\t\tВес свеклы    : %.2lf\n"
                       "\t\tВес моркови   : %.2lf\n"
                       "Суммарная цена без учёта скидки     : $ %.2lf\n"
                       "Суммарная цена с учетом скидки      : $ %.2lf\n"
                       "Базовые затраты на транспорт        : $ %.2lf\n"
                       "Дополнительные затраты на транспорт : $ %.2lf\n",
                       mass,
                       mass_a,
                       mass_b,
                       mass_c,
                       price,
                       price_total,
                       price_way,
                       way_plus);

                printf("\n\n"
                       "Хотите продолжить?\n"
                       "1) Да \n"
                       "2) Нет (выход)\n");

                printf("Ваш вариант: ");
                scanf("%i", &choice);

                switch (choice) {
                    case 1:
                        break;
                    case 2:
                        goto exit;
                }

                break;

            case 5:
                goto exit;

            default:
                goto exit;
        }
}








    exit: return 0;
}