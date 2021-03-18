#include <stdio.h>
#include <malloc.h>

#define LEN 100

char * remove_spaces(char * s);

int main() {
    char s1[LEN] = "Строка с пробелами";
    char * s2 = remove_spaces(s1);

    printf("Строка ДО преобразования    : \"%s\"\n", s1);
    printf("Строка ПОСЛЕ преобразования : \"%s\"\n", s2);

    return 0;
}

char * remove_spaces(char * s) {
    char *result = malloc(LEN * sizeof(char));

    for (int c = 0; c < LEN; c++) {
        if (s[c] == ' ') {
            result[c] = '_';
        }
        else {
            result[c] = s[c];
            if (result[c] == '\0')
                return result;
        }
    }
}