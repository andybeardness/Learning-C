#include <stdio.h>
#include <string.h>

int main(int argc, char * argv[]) {
    char p[] = "-p";
    char u[] = "-u";
    char l[] = "-l";

    if (argc != 3) return -1;

    if (strcmp(argv[1], p) == 0)
        printf("%s\n", argv[2]);

    if (strcmp(argv[1], u) == 0)
        printf("%s\n", strupr(argv[2]));

    if (strcmp(argv[1], l) == 0)
        printf("%s\n", strlwr(argv[2]));

    return 0;
}