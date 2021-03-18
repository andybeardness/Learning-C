#include <stdio.h>
#include <string.h>

typedef enum {
    FALSE = 0,
    TRUE = 1
} BOOL;

BOOL is_include(char * s, unsigned long len, char c) {
    for (unsigned long i = 0; i < len; i++) {
        if (s[i] == c) {
            return TRUE;
        }
    }
    return FALSE;
}

int main() {
    char * string = "IDDQD IDKFA";
    unsigned long len = strlen(string);
    char find_Q = 'Q';
    char find_W = 'W';

    printf("В строке \"%s\" содержится буква \"%c\" ? : %d\n", string, find_Q, is_include(string, len, find_Q));
    printf("В строке \"%s\" содержится буква \"%c\" ? : %d\n", string, find_W, is_include(string, len, find_W));

    return 0;
}