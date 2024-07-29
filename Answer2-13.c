#include<stdio.h>
int main()
{
    int a, b, c, mini;
    printf("Enter three numbers : ");
    scanf("%d%d%d", &a, &b, &c);
    if(a<b)
    {
        if(b<c)
            mini = a;
        else
        {
            if(a<c)
                mini = a;
            else
                mini = c;
        }
    }
    else
    {
        if(b<c)
            mini = b;
        else
            mini = c;
    }
    printf("\nminimum number is: %d", mini);
    getch();
    return 0;
}

