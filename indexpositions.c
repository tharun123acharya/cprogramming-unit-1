#include <stdio.h>

int main() {
    char s[100];
    gets(s);
    for(int i=0;s[i];i++)
        if(i%2==0)
            printf("%c ", s[i]);
}