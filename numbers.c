#include <stdio.h>

int main()
{
    int a[50], n, i;
    int min1, min2, max1, max2;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    min1 = min2 = max1 = max2 = a[0];

    for(i = 1; i < n; i++)
    {
        if(a[i] < min1)
        {
            min2 = min1;
            min1 = a[i];
        }
        else if(a[i] < min2 && a[i] != min1)
            min2 = a[i];

        if(a[i] > max1)
        {
            max2 = max1;
            max1 = a[i];
        }
        else if(a[i] > max2 && a[i] != max1)
            max2 = a[i];
    }

    printf("1st smallest = %d\n", min1);
    printf("2nd smallest = %d\n", min2);
    printf("1st largest = %d\n", max1);
    printf("2nd largest = %d\n", max2);

    return 0;
}