#include <stdio.h>

int main() {
    float expense, total = 0;

    printf("Enter 5 expenses:\n");

    for (int i = 1; i <= 5; i++) {
        printf("Expense %d: ", i);
        scanf("%f", &expense);
        total += expense;
    }

    printf("Average expense: %.2f\n", total / 5);

    return 0;
}










