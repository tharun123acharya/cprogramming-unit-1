#include <stdio.h>

int main()
{
    float m1, m2, m3, total, average;
    char grade; // grade variable added

    printf("Enter marks in 3 subjects:\n");
    scanf("%f %f %f", &m1, &m2, &m3);

    total = m1 + m2 + m3;
    average = total / 3;

    // display total & average
    printf("\nTotal Marks = %.2f\n", total);
    printf("Average Marks = %.2f\n", average);

    // determine grade using if-else
    if (average >= 90)
        grade = 'A';
    else if (average >= 80)
        grade = 'B';
    else if (average >= 70)
        grade = 'C';
    else if (average >= 60)
        grade = 'D';
    else if (average >= 50)
        grade = 'E';
    else
        grade = 'F';

    // display grade
    printf("Grade = %c\n", grade);

    return 0;
}