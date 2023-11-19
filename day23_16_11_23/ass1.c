#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student student1;

    printf("Enter name: ");
    scanf("%s", student1.name);

    printf("Enter roll number: ");
    scanf("%d", &student1.roll);

    printf("Enter marks: ");
    scanf("%d", &student1.marks);

    printf("Displaying Information:\n");
    printf("Name: %s\n", student1.name);
    printf("Roll number: %d\n", student1.roll);
    printf("Marks: %d\n", student1.marks);

    return 0;
}