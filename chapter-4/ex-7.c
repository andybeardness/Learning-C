#include <stdio.h>

#define KM100 100

int main() {
    const float GALLON_TO_PETROL = 3.785f;
    const float MILE_TO_KM = 1.609f;

    float miles, halons;

    float kms, petrol_litres;
    float kms_by_liter, kms100_by_liter;

    printf("Введите кол-во пройденных миль и потраченных галонов топлива через запятую : ");
    scanf("%f, %f", &miles, &halons);

    kms = miles * MILE_TO_KM;
    petrol_litres = halons * GALLON_TO_PETROL;

    kms_by_liter = kms / petrol_litres;
    kms100_by_liter = kms_by_liter / KM100;

    printf("Получается, что на одном литре бензина машина проедет %.1f сотен километров\n", kms100_by_liter);

    return 0;
}