#include <stdio.h>
void inputArray(int a[], int n);
void displayUsingPointers(int *p, int n);
void bubbleSortAsc(int a[], int n);
void bubbleSortDesc(int a[], int n);
int binarySearch(int a[], int n, int key);

int main()
{
    int a[50], n, choice, key, result;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    do
    {
        printf("\n----- MENU -----\n");
        printf("1. Input Array\n");
        printf("2. Bubble Sort (Smallest to Largest)\n");
        printf("3. Bubble Sort (Largest to Smallest)\n");
        printf("4. Binary Search\n");
        printf("5. Display Using Ordinary Pointers\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            inputArray(a, n);
            break;

        case 2:
            bubbleSortAsc(a, n);
            printf("Array sorted in ascending order.\n");
            break;

        case 3:
            bubbleSortDesc(a, n);
            printf("Array sorted in descending order.\n");
            break;

        case 4:
            printf("Enter element to search: ");
            scanf("%d", &key);
            result = binarySearch(a, n, key);
            if (result == -1)
                printf("Element not found.\n");
            else
                printf("Element found at position %d.\n", result + 1);
            break;

        case 5:
            displayUsingPointers(a, n);
            break;

        case 0:
            printf("Exiting program...\n");
            break;

        default:
            printf("Invalid choice!\n");
        }

    } while (choice != 0);

    return 0;
}

void inputArray(int a[], int n)
{
    int i;
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
}


void displayUsingPointers(int *p, int n)
{
    int i;
    printf("Elements using pointers:\n");
    for (i = 0; i < n; i++)
    {
        printf("Value: %d  Address: %p\n", *(p + i), (p + i));
    }
}


void bubbleSortAsc(int a[], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}


void bubbleSortDesc(int a[], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (a[j] < a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
int binarySearch(int a[], int n, int key)
{
    int low = 0, high = n - 1, mid;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (a[mid] == key)
            return mid;
        else if (a[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}