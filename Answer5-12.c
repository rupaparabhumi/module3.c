#include <stdio.h>

void main()
{
    int count = 0,j, times = 0,i, s, space;
    char string[100];

    puts("Enter a string:");
    gets(string);

    while (string[count] != '\0')
    {
        count++;
    }
    for (j= 0; j <= count - 2; j++)
    {
        i=(string[j] == 'i' || string[j] == 'I');
        s =(string[j + 1] == 's' || string[j+ 1] == 'S');

   if ((i && s&& space) == 1)
            times++;
    }
    printf("Frequency of the word 'is' %d\n", times);
}
