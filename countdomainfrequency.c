#include <stdio.h>
#include <string.h>

int main() {
    char email[100];
    scanf("%s", email);

    char *domain = strchr(email, '@');
    printf("Domain: %s", domain + 1);

    return 0;
}