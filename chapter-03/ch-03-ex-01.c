#include <stdio.h>

/*
 * Вывод программы:
 * 
 * -------------------------------------------------------------
 * In my system:
 * Type "char"      size is 1 byte(s)
 * Type "short"     size is 2 byte(s)
 * Type "int"       size is 4 byte(s)
 * Type "long"      size is 8 byte(s)
 * Type "long long" size is 8 byte(s)
 * 
 * 
 * Signed Int:
 * Max for "char" + 1 == 0
 * Max for "short" + 1 == -32767
 * Max for "int" + 1 == -2147483648
 * Max for "long" + 1 == -9223372036854775808
 * Max for "long long" + 1 == -9223372036854775808
 * 
 * 
 * Play with float:
 * Trying "float"       2e+20 + 1 - 2e20 == 0.000000
 * Trying "double"      2e+20 + 1 - 2e20 == 0.000000
 * Trying "long double" 2e+20 + 1 - 2e20 == 0.000000
 * -------------------------------------------------------------
 */
int main() {
    printf("In my system:\n");
    printf("Type \"char\"      size is %lu byte(s)\n", sizeof(char));
    printf("Type \"short\"     size is %lu byte(s)\n", sizeof(short));
    printf("Type \"int\"       size is %lu byte(s)\n", sizeof(int));
    printf("Type \"long\"      size is %lu byte(s)\n", sizeof(long));
    printf("Type \"long long\" size is %lu byte(s)\n", sizeof(long long));
    printf("\n\n");

    char      c  = 255;
    short     s  = 32768;
    int       i  = 2147483647;
    long      l  = 9223372036854775807;
    long long ll = 9223372036854775807;

    printf("Signed Int:\n");
    printf("Max for \"char\" + 1 == %i\n"        , c + 1);
    printf("Max for \"short\" + 1 == %i\n"       , s + 1);
    printf("Max for \"int\" + 1 == %i\n"         , i + 1);
    printf("Max for \"long\" + 1 == %ld\n"       , l + 1);
    printf("Max for \"long long\" + 1 == %lld\n" , ll + 1);
    printf("\n\n");

    float f = 2e20f;
    double d = 2e20;
    long double dd = 2e20;

    printf("Play with float:\n");
    printf("Trying \"float\"       2e+20 + 1 - 2e20 == %f\n" , f + 1.f - f);
    printf("Trying \"double\"      2e+20 + 1 - 2e20 == %lf\n", d + 1.  - d);
    printf("Trying \"long double\" 2e+20 + 1 - 2e20 == %Lf\n", dd + 1. - dd);

    return 0;
}