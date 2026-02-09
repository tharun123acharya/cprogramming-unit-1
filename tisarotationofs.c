#include <stdio.h>
#include <string.h>

int main() {
    char s[100], t[100], temp[200];

    printf("Enter string S: ");
    gets(s);

    printf("Enter string T: ");
    gets(t);

    if (strlen(s) != strlen(t)) {
        printf("Not a rotation");
        return 0;
    }

    strcpy(temp, s);
    strcat(temp, s);

    if (strstr(temp, t))
        printf("T is a rotation of S");
    else
        printf("T is NOT a rotation of S");

    return 0;
}