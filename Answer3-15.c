#include <stdio.h>

int main() {
    int num = 1;
    int sum = 0;

    while (num <= 10) {
        sum += num;
        num++;
    }

    printf("The sum of the numbers from 1 to 10 is: %d\n", sum);

    return 0;
}
