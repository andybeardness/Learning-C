#include <stdio.h>

int main() {
    double mass_molecule = 3.e-23;
    double quart_water = 950.;

    long long quarts;

    double molecules;

    printf("Введите объём воды в квартах (единица измерения воды в США) : ");
    scanf("%lli", &quarts);

    molecules = quarts * (quart_water / mass_molecule);

    printf("В %lli квартах воды содержится около %.0lf молекул\n", quarts, molecules);

    return 0;
}