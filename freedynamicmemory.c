#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int n, i;

    
    printf("Enter number of elements: ");
    scanf("%d", &n);


    ptr = (int *)malloc(n * sizeof(int));

    
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }


    for (i = 0; i < n; i++) {
        ptr[i] = i + 1;
    }

    
    printf("Allocated values:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }

    
    free(ptr);
    printf("\nMemory freed successfully.\n");

    return 0;
}