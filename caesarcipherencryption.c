#include <stdio.h>

int main() {
    char s[100];
    int k;

    scanf("%s", s);
    scanf("%d", &k);

    for (int i = 0; s[i]; i++)
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] = (s[i] - 'a' + k) % 26 + 'a';

    printf("%s", s);
    return 0;
}