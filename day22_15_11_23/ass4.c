//wap which will take information of 5 students like name, roll no, marks, email id and height and find the students information who has the highest mark using array of structure

#include <stdio.h>

struct Student
{
    char name[50];
    int rollNumber;
    int marks;
    char email[50];
    float height;
} students[5];

int main()
{
    int maxMarks = 0;
    int maxMarksIndex = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("\nEnter details of student %d:\n", i + 1);

        printf("Enter name: ");
        scanf("%s", students[i].name);

        printf("Enter roll number: ");
        scanf("%d", &students[i].rollNumber);

        printf("Enter marks: ");
        scanf("%d", &students[i].marks);

        printf("Enter email: ");
        scanf("%s", students[i].email);

        printf("Enter height: ");
        scanf("%f", &students[i].height);

        if (students[i].marks > maxMarks)
        {
            maxMarks = students[i].marks;
            maxMarksIndex = i;
        }
    }

    printf("\nStudent with highest marks:\n");
    printf("Name: %s\n", students[maxMarksIndex].name);
    printf("Roll Number: %d\n", students[maxMarksIndex].rollNumber);
    printf("Marks: %d\n", students[maxMarksIndex].marks);
    printf("Email: %s\n", students[maxMarksIndex].email);
    printf("Height: %.2f\n", students[maxMarksIndex].height);

    return 0;
}