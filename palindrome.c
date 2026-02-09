#include <stdio.h>

int main() {
    char str[100], rev[100];
    int i, length = 0, flag = 1;

    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++)
        length++;

    for (i = 0; i < length; i++)
        rev[i] = str[length - i - 1];

    rev[i] = '\0';

    for (i = 0; i < length; i++) {
        if (str[i] != rev[i]) {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("Palindrome");
    else
        printf("Not a palindrome");

    return 0;
}