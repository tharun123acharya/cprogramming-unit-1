#include <stdio.h>

int main()
{
    int n, i = 1, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    do
    {
        sum = sum + i; // adding each number
        i++;           // increment i
    } while (i <= n);

    printf("Sum = %d\n", sum);

    return 0;
}
