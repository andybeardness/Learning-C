#include <stdio.h>
#include <stdlib.h>

#define LEN 3

struct book {
    char title[10];
    int price;
};

void show_book(struct book b) {
    printf("Название книги : %s\n", b.title);
    printf("Цена книги     : %i\n\n", b.price);
}

int comp (const void * elem1, const void * elem2)
{
    int f = *((int*)elem1);
    int s = *((int*)elem2);
    if (f > s) return  1;
    if (f < s) return -1;
    return 0;
}

int main() {
    struct book b1 = {"Andy", 10};
    struct book b2 = {"Beardness", 20};
    struct book b3 = {"CMake", 30};

    struct book books[LEN] = {b3, b2, b1};

    int prices[LEN];

    for (int i = 0; i < LEN; i++) {
        prices[i] = books[i].price;
    }

    qsort(prices, sizeof(prices)/sizeof(*prices), sizeof(*prices), comp);

    for (int i = 0; i < LEN; i++) {
        for (int j = 0; j < LEN; j++) {
            if (prices[i] == books[j].price) {
                show_book(books[j]);
            }
        }
    }

    return 0;
}