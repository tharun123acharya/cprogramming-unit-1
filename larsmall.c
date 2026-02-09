#include <stdio.h>
#include <string.h>

int main(){
    char s[100], w[20];
    gets(s);
    int min=100, max=0;
    char small[20], large[20];
    int i=0;
    while(sscanf(s+i,"%s",w)==1){
        int len=strlen(w);
        if(len<min){ min=len; strcpy(small,w); }
        if(len>max){ max=len; strcpy(large,w); }
        i+=len+1;
    }
    printf("Smallest: %s\nLargest: %s",small,large);
}