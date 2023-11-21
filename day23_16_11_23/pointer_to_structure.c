#include <stdio.h>

struct student_database
{
    char name[10];
    int roll;
    int marks;
};

int main(int argc, char *argv[])
{
    struct student_database stud1 = {"Pritesh", 90, 90};

    struct student_database *ptr;
    ptr = &stud1;

    printf("Roll Number:%d\n", (*ptr).roll);
    printf("Name of student:%s\n",(*ptr).name);
    printf("MArks of student:%d\n\n", (*ptr).marks);
    printf("Name of student:%u\n",&(*ptr).name);
    printf("Roll Number:%u\n", &(*ptr).roll);
    printf("MArks of student:%u\n", &(*ptr).marks);

    return 0;
}

/*#include <stdio.h>

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

*/
