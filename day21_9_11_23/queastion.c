//wap to find highest marks in A10 section and what is the roll number 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int rollNumber;
    char section[10];
    int marks;
} Student;

int main() {
    int num;
    printf("Enter the number of students: ");
    scanf("%d", &num);

    Student* students = malloc(num * sizeof(Student));

    for (int i = 0; i < num; i++) {
        printf("Enter roll number, section, and marks for student %d: ", i + 1);
        scanf("%d %s %d", &students[i].rollNumber, students[i].section, &students[i].marks);
    }

    int highestMarks = 0;
    int rollNumberOfHighest = 0;

    for(int i = 0; i < num; i++) {
        if (students[i].marks > highestMarks) {
            highestMarks = students[i].marks;
            rollNumberOfHighest = students[i].rollNumber;
        }
    }

    printf("The roll number of the student with the highest marks is %d.\n", rollNumberOfHighest);
    printf("Marks obtained is %d.\n", highestMarks);

    free(students);
    
    return 0;
}












