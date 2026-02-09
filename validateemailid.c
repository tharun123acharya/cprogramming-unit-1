#include <stdio.h>
#include <string.h>

int main() {
    char email[100];
    scanf("%s", email);

    if (strchr(email, '@') && strchr(email, '.'))
        printf("Valid Email");
    else
        printf("Invalid Email");

    return 0;
}