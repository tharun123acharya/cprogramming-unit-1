#include <stdio.h>
#include <ctype.h>

int main() {
    char p[100];
    int u=0,l=0,d=0,s=0;

    scanf("%s", p);

    for (int i = 0; p[i]; i++) {
        if (isupper(p[i])) u=1;
        else if (islower(p[i])) l=1;
        else if (isdigit(p[i])) d=1;
        else s=1;
    }

    if (u && l && d && s)
        printf("Strong Password");
    else
        printf("Weak Password");

    return 0;
}