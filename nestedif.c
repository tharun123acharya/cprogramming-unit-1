#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("The number is positive.\n");

        if (num % 2 == 0) {
            printf("It is also even.\n");
        } else {
            printf("It is also odd.\n");
        }

    } else {
        if (num < 0) {
            printf("The number is negative.\n");
        } else {
            printf("The number is zero.\n");
        }
    }

    return 0;
}
