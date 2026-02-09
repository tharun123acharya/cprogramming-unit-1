#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int freq[26] = {0};

    scanf("%s", s);

    for (int i = 0; s[i]; i++)
        freq[s[i] - 'a']++;

    for (int i = 0; i < 26; i++)
        while (freq[i]--) printf("%c", i + 'a');

    return 0;
}