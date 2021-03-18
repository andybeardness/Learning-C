#include <stdio.h>
#include <stdlib.h>

int bin_to_dec(char * bin) {
    int binary_val = atoi(bin);
    int rem;
    int decimal_val = 0;
    int base = 1;

    while (binary_val > 0) {
        rem = binary_val % 10;
        decimal_val = decimal_val + rem * base;
        binary_val = binary_val / 10 ;
        base = base * 2;
    }

    return decimal_val;
}

int main(int argc, char * argv[]) {

    int dec_left, dec_right;

    if (argc != 3) exit(1);

    dec_left = bin_to_dec(argv[1]);
    dec_right = bin_to_dec(argv[2]);

    printf("Первое число : %i\n", dec_left);
    printf("Второе число : %i\n", dec_right);

    printf("Результат операции \"~\" к первому числу  : %i\n", ~dec_left);
    printf("Результат операции \"~\" ко второму числу : %i\n", ~dec_right);

    printf("Результат операции \"|\"                  : %i\n", dec_left | dec_right);
    printf("Результат операции \"&\"                  : %i\n", dec_left & dec_right);
    printf("Результат операции \"^\"                  : %i\n", dec_left ^ dec_right);

    return 0;
}