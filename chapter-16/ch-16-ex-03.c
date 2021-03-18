#include <stdio.h>
#include "H-ch-16-all.h"

int main() {
    polar RA = {1.1, 2.2};
    xy XY = POLAR_TO_XY(RA);

    printf("Полярные координаты :\n"
           "\t\tРадиус : %5.2lf\n"
           "\t\tУгол   : %5.2lf\n\n", RA.R, RA.A);

    printf("XY координаты       :\n"
           "\t\tX : %5.2lf\n"
           "\t\tY : %5.2lf\n\n", XY.X, XY.Y);

    return 0;
}