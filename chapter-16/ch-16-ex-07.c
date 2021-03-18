#include "H-ch-16-all.h"

#define LEN 4
#define ARGS 1., 2., 3., 4.

int main() {
    double * arr = NEW_D_ARRAY(LEN, ARGS);

    SHOW_ARRAY(arr, LEN);

    return 0;
}