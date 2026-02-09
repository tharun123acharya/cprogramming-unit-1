#include <stdio.h>
#include <string.h>

int main(){
    char s[100], t[100];
    gets(s);
    int k=0;
    for(int i=0;s[i];i++)
        if(s[i]!=' ') t[k++]=s[i];
    t[k]='\0';

    int l=0,r=strlen(t)-1;
    while(l<r){
        if(t[l++]!=t[r--]){
            printf("Not Palindrome");
            return 0;
        }
    }
    printf("Palindrome");
}