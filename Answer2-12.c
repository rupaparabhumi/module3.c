#include <stdio.h>

int main(){

int a,b,c;
int maximum;

printf("Enter any there numbers:");
scanf("%d%d%d",&a,&b,&c);

if(a>b && a>c)
    maximum=a;
 else if(b>c)

    maximum=b;
 else
    maximum=c;
 printf("maximum number is: %d",maximum);

 return(0);









}







