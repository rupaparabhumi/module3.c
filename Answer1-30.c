#include <stdio.h>

int main()
{
    int days, years;

    days = 365; // Total number of days

    // Converts days to years, weeks and days
    years = days/365; // Calculate years
    days  = years*365;

    // Print the results
    printf("Years: %d\n", years);
    printf("days: %d\n",days);

    //print day into year
    printf("\nday: %d\n",days);
    printf("years: %d\n",years);


    return 0;
}
