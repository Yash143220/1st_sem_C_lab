//wap by creating a student structure (name,roll number, marks , gender)provide the value of it and print it on screen
#include <stdio.h>

 struct Student {
    char name[50];
    int rollNumber;
    int marks;
    char gender;
} student;

int main() {

    printf("Enter name: ");
    scanf("%s", student.name);

    printf("Enter roll number: ");
    scanf("%d", &student.rollNumber);

    printf("Enter marks: ");
    scanf("%d", &student.marks);

    printf("Enter gender (M/F): ");
    scanf(" %c", &student.gender); 

    printf("\nStudent Information:\n");
    printf("Name: %s\n", student.name);
    printf("Roll Number: %d\n", student.rollNumber);
    printf("Marks: %d\n", student.marks);
    printf("Gender: %c\n", student.gender);

    return 0;
}
