#include <stdio.h>

int main() {
    int i;

    for (i = 1; i <= 10; i++) {
        printf("%02d ", i);
    }
    printf("\n");

    for (i = 11; i <= 20; i++) {
        printf("%02d ", i);
    }
    printf("\n");
    printf("..........\n");
    printf("..........\n");
    for (i = 41; i <= 50; i++) {
        printf("%02d ", i);
    }
    printf("\n");

    return 0;
}
