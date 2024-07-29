#include <stdio.h>

int main() {
    int n = 10;
    int spiral[n][n];

    int num = 1;
    int top = 0, bottom = n - 1, left = 0, right = n - 1;

    while (num <= n * n) {

        for (int i = left; i <= right; i++) {
            spiral[top][i] = num++;
        }
        top++;


        for (int i = top; i <= bottom; i++) {
            spiral[i][right] = num++;
        }
        right--;


        for (int i = right; i >= left; i--) {
            spiral[bottom][i] = num++;
        }
        bottom--;


        for (int i = bottom; i >= top; i--) {
            spiral[i][left] = num++;
        }
        left++;
    }


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%3d ", spiral[i][j]);
        }
        printf("\n");
    }

    return 0;
}
