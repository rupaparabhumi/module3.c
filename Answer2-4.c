#include <stdio.h>

int main (){

int number1,number2;


printf("Enter your number1:");
scanf("%d",&number1);
printf("\nEnter your number2:");
scanf("%d",&number2);


 int sumResult=number1+number2;
 int subResult=number1-number2;
 int mulResult=number1*number2;
 int divResult=number1/number2;
 int moduloResult=number1%number2;


 printf("\nsummation of %d and %d is :%d",number1,number2,sumResult);
 printf("\nsubtraction of %d and %d is :%d",number1,number2,subResult);
 printf("\nmultiplication of %d and %d is :%d",number1,number2,mulResult);
 printf("\ndivision of %d and %d is :%d",number1,number2,divResult);
 printf("\nmodulo of %d and %d is :%d",number1,number2,moduloResult);

 return(0);









}
