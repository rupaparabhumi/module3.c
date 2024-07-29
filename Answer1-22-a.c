 #include <stdio.h>

int main() {
  double principal = 1000; // principal amount
  double rate = 9; //annual rate of interest
  double time = 2; // time

  // Calculating compound Interest
    double Amount = principal * (pow((1 + rate / 100), time));
    double CI = Amount - principal;

    printf("Compound Interest is : %lf",CI);


}
