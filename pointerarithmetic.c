#include <stdio.h>

int main() {
    int arr[] = {100, 200, 300, 400, 500};
    int *ptr = arr;  

    printf("Array elements using pointer arithmetic:\n");

    for (int i = 0; i < 5; i++) {
        printf("Value at arr[%d] = %d, Address = %p\n", 
                i, *(ptr + i), (ptr + i));
    }

    printf("\nPointer movement demonstration:\n");
    printf("ptr initially points to: %p\n", ptr);

    ptr++;  
    printf("After ptr++ it points to: %p (value = %d)\n", ptr, *ptr);

    ptr--; 
    printf("After ptr-- it points to: %p (value = %d)\n", ptr, *ptr);

    return 0;
}