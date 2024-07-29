#include <stdio.h>

void main(){

int number3,number4;

printf("Enter your number 3: ");
scanf("%d",&number3);
printf("\nEnter your number 4: ");
scanf("%d",&number4);



int sumResult=number3 +number4;
int subResult=number3-number4;
int mulResult=number3*number4;
float divResult=number3/number4;
int moduloResult=number3%number4;



printf("\nSummation of %d and %d is : %d",number3,number4,sumResult);
printf("\nsubtraction of %d and %d is : %d",number3,number4,subResult);
printf("\nMultiplication of %d and %d is : %d",number3,number4,mulResult);
printf("\ndivision of %d and %d is : %1.f",number3,number4,divResult);
printf("\nModulo of %d and %d is :%d",number3,number4,moduloResult);


}
