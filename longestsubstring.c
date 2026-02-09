#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[200];
    int lastIndex[256];
    int start = 0, maxLen = 0, maxStart = 0;
    int digitCount = 0;

    
    for (int i = 0; i < 256; i++)
        lastIndex[i] = -1;

    printf("Enter the string: ");
    fgets(s, sizeof(s), stdin);

    int n = strlen(s);

    for (int end = 0; end < n; end++) {
        char c = s[end];

        
        if (c == '\n') break;

        
        if (lastIndex[(unsigned char)c] >= start) {
            for (int i = start; i <= lastIndex[(unsigned char)c]; i++) {
                if (isdigit(s[i]))
                    digitCount--;
            }
            start = lastIndex[(unsigned char)c] + 1;
        }

        lastIndex[(unsigned char)c] = end;

        if (isdigit(c))
            digitCount++;

    
        if (digitCount > 0 && (end - start + 1) > maxLen) {
            maxLen = end - start + 1;
            maxStart = start;
        }
    }

    if (maxLen == 0) {
        printf("No valid substring found.\n");
    } else {
        printf("Longest substring: ");
        for (int i = maxStart; i < maxStart + maxLen; i++)
            printf("%c", s[i]);
        printf("\nLength: %d\n", maxLen);
    }

    return 0;
}