#include <stdio.h>

/*
 * Пример работы программы :
 * -------------------------------------------------------------
 *
 * Введите свой рост (см) : 180
 * Введите свой вес  (кг) : 96
 *
 *
 * Ваш индекс массы тела : 29.6
 *             Результат : Избыточная масса тела (предожирение)
 *
 * Твой нормальный вес от 59.9 до 77.8 кг
 *
 * -------------------------------------------------------------
 * Формулу взял с сайта :
 * https://plasticheskaya-hirurgiya-spb.ru/articles/kalkulyator-imt
 * 
 */
int main() {
    float height, height_squ;
    float weight;

    float index;

    char *result;

    float normal_min_weight, normal_max_weight;

    printf("Введите свой рост (см) : ");
    scanf("%f", &height);

    printf("Введите свой вес  (кг) : ");
    scanf("%f", &weight);

    /*
     * I = w / h^2
     */

    height /= 100;
    height_squ = height * height;

    index = weight / ( height_squ );

    /*
     * 16 и менее -- Выраженный дефицит массы тела
     * 16 - 18,5  -- Недостаточная масса тела (дефицит)
     * 18,5 - 24  -- Нормальная масса тела
     * 25 - 30    -- Избыточная масса тела (предожирение)
     * 30 - 35    -- Ожирение I степени
     * 35 - 40    -- Ожирение II степени
     * 40 и более -- Ожирение III степени
     */

    if      (index < 16)                    { result = "Выраженный дефицит массы тела"; }
    else if (index >= 16   && index < 18.5) { result = "Недостаточная масса тела (дефицит)"; }
    else if (index >= 18.5 && index < 24)   { result = "Нормальная масса тела"; }
    else if (index >= 24   && index < 30)   { result = "Избыточная масса тела (предожирение)"; }
    else if (index >= 30   && index < 35)   { result = "Ожирение I степени"; }
    else if (index >= 35   && index < 40)   { result = "Ожирение II степени"; }
    else                                    { result = "Ожирение III степени"; }


    normal_min_weight = 18.5 * height_squ;
    normal_max_weight = 24 * height_squ;

    printf("\n\n");
    printf("Ваш индекс массы тела : %.1f\n", index);
    printf("            Результат : %s\n\n", result);
    printf("Твой нормальный вес от %.1f до %.1f кг\n",
            normal_min_weight,
            normal_max_weight);

    return 0;
}