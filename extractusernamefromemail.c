#include <stdio.h>

int main() {
    char email[100];
    scanf("%s", email);

    for (int i = 0; email[i] != '@'; i++)
        printf("%c", email[i]);

    return 0;
}