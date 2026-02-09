#include <stdio.h>
#include <stdlib.h>

struct Student {
    int roll;
    char name[20];
    float marks;
};

int main() {
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Array of pointers to structure
    struct Student *students[n];

    // Allocate memory for each structure and take input
    for (i = 0; i < n; i++) {
        students[i] = (struct Student *)malloc(sizeof(struct Student));

        printf("\nEnter details of student %d\n", i + 1);
        printf("Roll: ");
        scanf("%d", &students[i]->roll);

        printf("Name: ");
        scanf("%s", students[i]->name);

        printf("Marks: ");
        scanf("%f", &students[i]->marks);
    }

    // Display the data
    printf("\n--- Student Details ---\n");
    for (i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Roll: %d\n", students[i]->roll);
        printf("Name: %s\n", students[i]->name);
        printf("Marks: %.2f\n", students[i]->marks);
    }

    // Free allocated memory
    for (i = 0; i < n; i++) {
        free(students[i]);
    }

    return 0;
}
