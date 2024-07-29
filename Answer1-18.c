#include <stdio.h>


int main()
{
	/*Annual Salary of an Employee in C*/

	float AnnualPayment, basic, da, hra, da1, hra1;

	printf("Enter basic salary : ");
	scanf("%f", &basic);

	printf("Enter DA : ");
	scanf("%f", &da1);

	printf("Enter HRA : ");
	scanf("%f", &hra1);

	da = (da1 *basic);
	hra = (hra1 *basic);

	AnnualPayment = basic + da + hra;

	printf("\nAnnual Salary of an Employee:%f\n", AnnualPayment);
	return (0);
}
