#include <stdio.h>

int main()
{
    int days, month;

    days = 365; // Total number of days

    // Converts days to years, weeks and days
    month = days*365; // Calculate years
    month  = days/30;

    // Print the results
    printf("month: %d\n", month);
    printf("days: %d\n",days);

    //print day into year
    printf("\nday: %d\n",days);
    printf("month: %d\n",month);


    return 0;
}
