#include <stdio.h>


int main (){

double principal=50000;

double rate=6;

double time=3;

double Amount =principal *
         ((pow((1 + rate /100),
               time)));

double CI=Amount-principal;

printf("Compound Interest is : %1f",CI);

return(0);







}
