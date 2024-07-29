#include <stdio.h>

int main()
{
    int days, month,years;

    days = 365; // Total number of days

    // Converts days to years, weeks and days
    years = days/365;
    month = days*365; // Calculate years
    month  = days/30;

    // Print the results
    printf("years: %d\n",years);
     printf("days: %d\n",days);
    printf("month: %d\n", month);

    //print day into year
    printf("\nyears: %d\n",years);
    printf("month: %d\n",month);
    printf("day: %d\n",days);


    return 0;
}
