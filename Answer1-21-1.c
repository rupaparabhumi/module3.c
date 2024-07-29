#include <stdio.h>

int main (void){

int a,b,temp;
printf("Enter a and b:");
scanf("%d%d",&a,&b);
temp=a;
a=b;
b=temp;
printf("\nNew a=%d and New b=%d",a,b);
return(0);









}
