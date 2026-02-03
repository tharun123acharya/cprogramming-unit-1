#include <stdio.h>

int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    gets(str);

    printf("Characters at even index positions:\n");
    for (i = 0; str[i] != '\0'; i++) {
        if (i % 2 == 0) {
            printf("%c ", str[i]);
        }
    }

    return 0;
}
