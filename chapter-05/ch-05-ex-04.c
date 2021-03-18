#include <stdio.h>

#define CM_TO_DM 0.1f;
#define CM_TO_M 0.01f;
#define CM_TO_D 0.393701f;
#define CM_TO_F 0.0328084f;

int main() {
    float cm, dm, m, d, f;
    int go = 1;

    while (go) {
        printf("Программа для конвертации сантиметров в дециметры, метры, дюймы и футы\n");
        printf("Для выхода из программы введите \"0\" (без кавычек)\n\n");

        printf("Введите количество сантиметров: ");
        scanf("%f", &cm);

        go = (int) cm;

        if (!go) {
            break;
        }

        dm = cm * CM_TO_DM;
        m  = cm * CM_TO_M;
        d  = cm * CM_TO_D;
        f  = cm * CM_TO_F;

        printf("%.1f сантиметров == %.1f дециметров, %.1f метров, %.1f дюймов, %.1f футов\n\n\n",
                cm, dm, m, d, f);
    }

    return 0;
}