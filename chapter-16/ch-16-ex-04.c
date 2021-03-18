#include <stdio.h>
#include "H-ch-16-all.h"

int main() {
    unsigned long secs = 5;

    printf("Ждем %ld секунд\n", secs);

    WAIT(secs);

    printf("Прошло %ld секунд\n", secs);

    return 0;
}