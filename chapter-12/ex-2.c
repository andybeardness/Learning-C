#include <stdio.h>
#include "ch12-ex-2.h"

int main() {
    int mode;

    printf("Введите 0 для выбора метрического режима или 1 для выбора режима, принятого в США: ");

    scanf("%d", &mode);

    while(mode >= 0) {
        set_mode(mode);
        get_info();
        show_info();

        printf("Введите 0 для выбора метрического режима или 1 для выбора режима, принятого в США: ");
        scanf("%d", &mode);

    }

    return 0;
}