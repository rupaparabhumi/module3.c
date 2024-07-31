#include <stdio.h>
#include <string.h>

int main() {
    char originalString[] = "Hello, Google!";
    char substring[10];
    int start = 7;
    int length = 9;

  strncpy(substring, originalString + start, length);
    substring[length] = '\0';
   printf("Original String: %s\n", originalString);
    printf("extract a Substring: %s\n", substring);

    return 0;
}
