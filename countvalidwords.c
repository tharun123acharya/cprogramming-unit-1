#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];
    int i, count = 0, inWord = 0;

    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            if (!inWord) {
                count++;
                inWord = 1;
            }
        } else {
            inWord = 0;
        }
    }

    printf("Valid words count: %d", count);
    return 0;
}