#include <stdio.h>

int main(){

printf("\nEnter a and b:");
scanf("%d%d",&a,&b);
//scanf("%d", &a, &b);
a=a+b;
b=a-b;
a=a-b;
printf("\nNew a=%d and New b=%d",a,b);
return(0);


}
