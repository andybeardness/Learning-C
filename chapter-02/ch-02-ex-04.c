#include <stdio.h>

void great_boy();
void the_best();

int main() {
    for (int i = 0; i < 3; i++) {
        great_boy();
    }

    the_best();

    return 0;
}

void great_boy() {
    printf("Billy is a great boy!\n");
}

void the_best() {
    printf("Billy is the best!\n");
}