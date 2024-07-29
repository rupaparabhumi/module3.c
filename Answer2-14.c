#include <stdio.h>

int main (){


 int n1=5, n2=15, n3=40,max;

 max=(n1>n2)? (n2>n3)? n1 :n2 :n3;

printf("Largest number %d and %d and %d is %d.",
                       n1,n2,n3,max);


 return(0);
}
