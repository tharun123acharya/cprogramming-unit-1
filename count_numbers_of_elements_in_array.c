#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40, 50};

    // Calculate number of elements
    int count = sizeof(arr) / sizeof(arr[0]);
    printf("Number of elements in the array = %d\n", count);

    return 0;
}
