#include <stdio.h>

void smile();

int main() {
    for (int i = 3; i > 0; i--) {
        for (int j = i; j > 0; j--) {
            smile();
        }
        printf("\n");
    }

    return 0;
}

void smile() {
    printf("Smile! ");
}