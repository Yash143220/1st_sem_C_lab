//wap using above structure stucture in 21.2 to find detail of the student who scored lowest mark(minimum 5)

#include <stdio.h>

  typedef struct  {
    char name[50];
    int rollNumber;
    int marks;
    char gender;
} Student;

int main() {
    int i;
    Student student[5];
    for (int i = 0; i < 5; i++) {
        printf("Enter Name, Roll number, marks, gender of %d  student: ", i + 1);
        scanf("%s %d %d %c", student[i].name, &student[i].rollNumber, &student[i].marks, &student[i].gender);
    }
    int lowest = student[0].marks;
    int index;
    for ( i = 0; i < 5; i++)
    {
        if (student[i].marks < lowest)
        {
            lowest = student[i].marks;
            index = i;
        }
        
    }
    printf("\nStudent Information:\n");
    printf("Name: %s\n", student[index].name);
    printf("Roll Number: %d\n", student[index].rollNumber);
    printf("Marks: %d\n", student[index].marks);
    printf("Gender: %c\n", student[index].gender);

    return 0;
}
