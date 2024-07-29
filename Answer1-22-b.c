  #include <stdio.h>
  int main (){


//Compound interest=Amount-p
  double principal_amount, rate, time_duration, amount, compound_interest;

    printf("\nEnter the principal amount: ");
    scanf("%lf",&principal_amount);
    printf("Enter the rate of interest: ");
    scanf("%lf",&rate);
    printf("Enter the time duration: ");
    scanf("%lf",&time_duration);

    amount = principal_amount*((pow((1+rate/100),time_duration)));

    compound_interest = amount - principal_amount;

    printf(" The compound interest is: %lf",compound_interest);
    return 0;
     }
