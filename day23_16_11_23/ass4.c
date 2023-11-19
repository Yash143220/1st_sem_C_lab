//give an example of typedef and #define

#include <stdio.h>

#define MAX_STUDENTS 5

typedef struct {
    char name[50];
    int rollNumber;
    int marks;
    char gender;
} Student;

int main() {
    Student students[MAX_STUDENTS];

    for (int i = 0; i < MAX_STUDENTS; i++) {
        printf("Enter Name, Roll number, marks, gender of student %d: ", i + 1);
        scanf("%s %d %d %c", students[i].name, &students[i].rollNumber, &students[i].marks, &students[i].gender);
    }

    printf("\nStudent Details:\n");
    for (int i = 0; i < MAX_STUDENTS; i++) {
        printf("Name: %s, Roll Number: %d, Marks: %d, Gender: %c\n", students[i].name, students[i].rollNumber, students[i].marks, students[i].gender);
    }

    return 0;
}