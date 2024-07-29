#include <stdio.h>
void main()
{
    int custid, conu;  // customer ID and consumed units.
    float chg, surchg = 0, gramt, netamt;  //  charge, surcharge, gross amount, and net amount.
    char connm[25];  //  customer name.

    printf("Input Customer ID :");
    scanf("%d", &custid);
    printf("Input the name of the customer :");
    scanf("%s", connm);
    printf("Input the unit consumed by the customer : ");
    scanf("%d", &conu);

    if (conu < 350)
        chg = 1.20;
    else if (conu >= 350 && conu <600)
        chg = 1.50;
    else if (conu >= 600 && conu < 800)
        chg = 1.80;
    else
        chg = 2.00;

    gramt = conu * chg;

    if (gramt > 300)
        surchg = gramt * 15 / 100.0;

    netamt = gramt + surchg;

    if (netamt < 256)
        netamt = 256;

    printf("\nElectricity Bill\n");
    printf("Customer IDNO                       :%d\n", custid);
    printf("Customer Name                       :%s\n", connm);
    printf("unit Consumed                       :%d\n", conu);
    printf("Amount Charges @Rs. %1.2f  per unit :%8.2f\n", chg, gramt);
    printf("Surchage Amount                     :%8.2f\n", surchg);
    printf("Net Amount Paid By the Customer     :%8.2f\n", netamt);
}















