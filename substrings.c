#include <stdio.h>
#include <string.h>

int main(){
    char s[50];
    gets(s);
    int n=strlen(s);
    for(int i=0;i<n;i++)
        for(int j=1;j<=n-i;j++)
            printf("%.*s\n", j, s+i);
}