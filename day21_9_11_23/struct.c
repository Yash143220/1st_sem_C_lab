
#include <stdio.h>


/*global declaration*/
struct student
{
    int roll;
    int marks;
} str1, str2, str3, str4, str5; 

void main()
{
    // struct student str1; /*local declaration*/

    printf("Pls Enter the student roll number:");
    scanf("%d", &str1.roll);
    printf("Pls Enter the student marks:");
    scanf("%d", &str1.marks);
    printf("Pls Enter the student roll number:");
    scanf("%d", &str2.roll);
    printf("Pls Enter the student marks:");
    scanf("%d", &str2.marks);
    printf("Pls Enter the student roll number:");
    scanf("%d", &str3.roll);
    printf("Pls Enter the student marks:");
    scanf("%d", &str3.marks);
    printf("Pls Enter the student roll number:");
    scanf("%d", &str4.roll);
    printf("Pls Enter the student marks:");
    scanf("%d", &str4.marks);
    printf("Pls Enter the student roll number:");
    scanf("%d", &str5.roll);
    printf("Pls Enter the student marks:");
    scanf("%d", &str5.marks);

    printf("Student roll %d and marks %d\n", str2.roll, str2.marks);
    printf("Student roll %d and marks %d\n", str1.roll, str1.marks);
    printf("Student roll %d and marks %d\n", str3.roll, str3.marks);
    printf("Student roll %d and marks %d\n", str4.roll, str4.marks);
    printf("Student roll %d and marks %d\n", str5.roll, str5.marks);
}