#include <stdio.h>

int main() {
    int x = 5;

    printf("x = %d\n", x);
    printf("x++ = %d\n", x++); // post-increment
    printf("After x++ , x = %d\n", x);

    printf("++x = %d\n", ++x); // pre-increment
    printf("After ++x , x = %d\n", x);

    printf("x-- = %d\n", x--); // post-decrement
    printf("After x-- , x = %d\n", x);

    printf("--x = %d\n", --x); // pre-decrement
    printf("After --x , x = %d\n", x);

    printf("x*3 = %d\n", x * 3);

    return 0;
}