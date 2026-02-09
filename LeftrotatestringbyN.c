#include <stdio.h>
#include <string.h>

int main(){
    char s[100], temp[100];
    int n;
    gets(s);
    scanf("%d",&n);
    int len=strlen(s);
    n%=len;
    strcpy(temp, s+n);
    strncat(temp, s, n);
    puts(temp);
}