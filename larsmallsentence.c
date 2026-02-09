#include <stdio.h>
#include <string.h>

int main() {
    char str[200], word[50];
    char smallest[50], largest[50];
    int i = 0, j = 0;

    printf("Enter a sentence: ");
    gets(str);

    while (1) {
        if (str[i] != ' ' && str[i] != '\0') {
            word[j++] = str[i];
        } else {
            word[j] = '\0';
            if (strlen(word) > 0) {
                if (strlen(smallest) == 0 || strlen(word) < strlen(smallest))
                    strcpy(smallest, word);
                if (strlen(word) > strlen(largest))
                    strcpy(largest, word);
            }
            j = 0;
        }
        if (str[i] == '\0')
            break;
        i++;
    }

    printf("Smallest word: %s\n", smallest);
    printf("Largest word: %s\n", largest);

    return 0;
}