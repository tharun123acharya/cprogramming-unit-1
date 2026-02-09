#include <stdio.h>

int main() {
    char s1[100], s2[100];
    int i = 0;

    printf("Enter first string: ");
    gets(s1);
    printf("Enter second string: ");
    gets(s2);

    while (s1[i] == s2[i] && s1[i] != '\0')
        i++;

    if (s1[i] > s2[i])
        printf("First string is greater");
    else if (s1[i] < s2[i])
        printf("Second string is greater");
    else
        printf("Both strings are equal");

    return 0;
}