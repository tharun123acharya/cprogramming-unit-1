#include <stdio.h>

int main() {
    char num[20];
    scanf("%s", num);

    for (int i = 0; i < 6; i++)
        printf("*");

    printf("%s", num + 6);
    return 0;
}