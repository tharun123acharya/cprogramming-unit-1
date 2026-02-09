#include <stdio.h>
#include <ctype.h>

int main() {
    char s[100];
    gets(s);
    for(int i=0; s[i]; i++) {
        char c = tolower(s[i]);
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
            s[i] = '*';
    }
    puts(s);
}