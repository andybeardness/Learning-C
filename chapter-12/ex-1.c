#include <stdio.h>

void critic (int * units);

int main (void) {
    int units = 0;

    printf("Cкoлькo фунтов весит маленький бочонок меда?\n");
    scanf("%d", &units);

    while (units != 56)
        critic (&units);

    printf ("Вы должны это проверить! \n");

    return 0;
}
void critic(int * units) {
    printf ("Baм не повезло. Попытайтесь еще раз.\n");
    scanf ("%d", units);
}