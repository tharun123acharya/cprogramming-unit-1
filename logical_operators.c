#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\nLogical Operator Results:\n");

    // AND operator (&&)
    printf("(a > 0) && (b > 0) : %d\n", (a > 0) && (b > 0));

    // OR operator (||)
    printf("(a > 0) || (b > 0) : %d\n", (a > 0) || (b > 0));

    // NOT operator (!)
    printf("!(a > 0) : %d\n", !(a > 0));

    return 0;
}
