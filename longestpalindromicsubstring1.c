#include <stdio.h>
#include <string.h>

int isPalindrome(char str[], int start, int end) {
    while (start < end) {
        if (str[start++] != str[end--])
            return 0;
    }
    return 1;
}

int main() {
    char str[100];
    int i, j, start = 0, maxLen = 1, len;

    printf("Enter a string: ");
    gets(str);

    len = strlen(str);

    for (i = 0; i < len; i++) {
        for (j = i; j < len; j++) {
            if (isPalindrome(str, i, j) && (j - i + 1 > maxLen)) {
                start = i;
                maxLen = j - i + 1;
            }
        }
    }

    printf("Longest Palindromic Substring: ");
    for (i = start; i < start + maxLen; i++)
        printf("%c", str[i]);

    return 0;
}