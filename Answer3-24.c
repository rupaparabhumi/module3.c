#include <stdio.h>


int Series(int n)
{
    int i;
    int sums = 0;
    for (i = 1; i <= n; i++)
        sums += (i * i);
    return sums;
}


int main()
{
    int n = 10;
    int res = Series(n);
    printf("%d", res);
}
