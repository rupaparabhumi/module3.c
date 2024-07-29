#include <stdio.h>



int main (){

int student,apples;

printf("Enter your student:");
scanf("%d",&student);

printf("Enter your apples:  ");
scanf("%d",&apples);

int divResult=student/apples;
printf ("\nDivision of %d and %d is :%d",student,apples,divResult);

return (0);

}
