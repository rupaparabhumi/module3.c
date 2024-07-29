#include <stdio.h>
#include <string.h>

#define str_size 100

int main() {
    char str[str_size];
    int alp, digit, ch, i;
    alp = digit = ch = i = 0;

    printf("Count total number of alphabets, digits, and  characters :\n");
    printf("Input the string : ");
    fgets(str, sizeof str, stdin);


    while (str[i] != '\0') {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            alp++;
        } else if (str[i] >= '0' && str[i] <= '9') {
            digit++;
        } else {
            ch++;
        }
        i++;
    }


    printf("Number of Alphabets in the string is : %d\n", alp);
    printf("Number of Digits in the string is : %d\n", digit);
    printf("Number of characters in the string is : %d\n\n", ch);

	return 0;
}


