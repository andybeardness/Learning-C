#include <stdio.h>
#include "H-ch-12-ex-02.h"

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