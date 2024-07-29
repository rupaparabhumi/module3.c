#include <stdio.h>
#include <string.h>
int main() {
    char str[100], word[20], mx[20], mn[20], c;
    int i = 0, j = 0, flg = 0;

    printf("Find the largest and smallest word in a string :\n");
    printf("Input the string : ");
    i = 0;
    while ((c = getchar()) != '\n' && i < sizeof(str) - 1) {
        if (isalnum(c) || isspace(c)) {
            str[i++] = c;
        }
    }
    str[i] = '\0';

    for (i = 0; i < strlen(str); i++) {
        while (i < strlen(str) && !isspace(str[i]) && isalnum(str[i])) {
            word[j++] = str[i++];
        }
        if (j != 0) {
            word[j] = '\0';
            if (!flg) {
                flg = !flg;
                strcpy(mx, word);
                strcpy(mn, word);
            }
            if (strlen(word) > strlen(mx)) {
                strcpy(mx, word);
            }
            if (strlen(word) < strlen(mn)) {
                strcpy(mn, word);
            }
            j = 0;
        }
    }
    printf("The largest word is '%s'\nthe smallest word is '%s' \nthe string: '%s'.\n", mx, mn, str);

    return 0;
}
