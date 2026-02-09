#include <stdio.h>
#include <string.h>

int main(){
    char s[100];
    gets(s);
    for(int i=0;s[i];i++){
        for(int j=i+1;s[j];j++){
            if(s[i]==s[j]){
                memmove(&s[j], &s[j+1], strlen(s)-j);
                j--;
            }
        }
    }
    puts(s);
}