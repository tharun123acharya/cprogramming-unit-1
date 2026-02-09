#include <stdio.h>

int main()
{
    int a[50], n, i, j, temp;
    int swapped;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n - 1; i++)
    {
        swapped = 0;   

        for (j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                swapped = 1;
            }
        }

        
        if (swapped == 0)
        {
            printf("\nArray already sorted.\n");
            printf("Termination occurred at pass %d\n", i + 1);
            break;
        }
    }

    printf("\nSorted array:\n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}