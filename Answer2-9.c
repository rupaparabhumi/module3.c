#include <stdio.h>

int main (){

char ch;

//character from user
printf("Enter any character:");
scanf("%c",&ch);


if(ch >='A' && ch <='Z')
{
  printf("'%c' is uppercase alphabet.",ch);
}
else if (ch >= 'a' && ch <='z')
{

printf("'%c' is lowercase  alphabet.",ch);
}

else if(ch >= 48 && ch <= 57)
   {
printf("digit");
   }
else
{
  printf("Symbol");
}
   return 0;


}
