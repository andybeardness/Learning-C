#include <stdio.h>
#include <string.h>

int main() {
    char * string = "IDDQD IDKFA";
    unsigned long len = strlen(string);

    for (unsigned long i = len - 1; i >= 0; i--) {
        printf("%c", string[i]);
    }

    return 0;
}