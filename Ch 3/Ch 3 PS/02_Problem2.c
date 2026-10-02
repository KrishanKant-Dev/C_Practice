/*

Write a program to determine whether a student has passed or failed. To pass, a
student requires a total of 40% and at least 33% in each subject. Assume there are
three subjects and take the marks as input from the user

*/

#include <stdio.h>

int main()
{
    int marks_sub1, marks_sub2, marks_sub3, total;
    float percentage;

    printf("Enter The Marks Obtained in All Three Subjects: ");
    scanf("%d %d %d", &marks_sub1, &marks_sub2, &marks_sub3);

    total = marks_sub1 + marks_sub2 + marks_sub3;
    percentage = total / 3.0;

    if (percentage >= 40 && marks_sub1 >= 33 && marks_sub2 >= 33 && marks_sub3 >= 33)
    {
        printf("You are Pass");
    }

    else
    {
        printf("You are Fail");
    }
    return 0;
}