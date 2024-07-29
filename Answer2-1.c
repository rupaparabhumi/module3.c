#include <stdio.h>
void main()
{
    int a, b;

    printf("Enter the values for 1 and 2\n");
    scanf("%d %d", &a, &b);
    if (a == b)
        printf("a and b are equal\n");
    else
        printf("a and b are not equal\n");
}
