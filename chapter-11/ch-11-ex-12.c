#include <stdio.h>

int main(int argc, char * argv[]) {

    printf("Аргументы командной строки в обратном порядке : ");

    for (int c = argc - 1; c >= 1; c--) {
        printf("%s ", argv[c]);
    }

    printf("\b\n");

    return 0;
}