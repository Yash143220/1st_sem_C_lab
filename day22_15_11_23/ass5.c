// wap to use an array of structure to calculate the gross salary (min 3 employees) and also to calculate the salary of each employee with given information like basic salary: 12500 RS DA: 50% and HRA: 12%. At the time of execution, each year the DA value should change. Now calculate how much extra amount the company need to pay after change of DA.

/*
#include <stdio.h>

struct Employee 
{
    char name[50];
    int id;
    int basicSalary;
    float da;
    float hra;
    float grossSalary;
} employees[3];

int main()
{
    float da;
    printf("Enter DA: ");
    scanf("%f", &da);

    for (int i = 0; i < 3; i++)
    {
        printf("\nEnter details of employee %d:\n", i + 1);

        printf("Enter name: ");
        scanf("%s", employees[i].name);

        printf("Enter id: ");
        scanf("%d", &employees[i].id);

        printf("Enter basic salary: ");
        scanf("%d", &employees[i].basicSalary);

        employees[i].da = da;
        employees[i].hra = 0.12 * employees[i].basicSalary;
        employees[i].grossSalary = employees[i].basicSalary + employees[i].da + employees[i].hra;
    }

    printf("\nEmployee Details:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("\nEmployee %d:\n", i + 1);
        printf("Name: %s\n", employees[i].name);
        printf("ID: %d\n", employees[i].id);
        printf("Basic Salary: %d\n", employees[i].basicSalary);
        printf("DA: %.2f\n", employees[i].da);
        printf("HRA: %.2f\n", employees[i].hra);
        printf("Gross Salary: %.2f\n", employees[i].grossSalary);
    }

    return 0;
}
*/

#include <stdio.h>

struct Employee {
    int employeeID;
    double basicSalary;
    double DA;
    double HRA;
    double grossSalary;
};

int main() {
    struct Employee employees[3] = {
        {1, 12500, 0.50, 0.12, 0},
        {2, 12500, 0.50, 0.12, 0},
        {3, 12500, 0.50, 0.12, 0}
    };
    int newDA;

    printf("Enter new DA (in percentage %): ");
    scanf("%d", &newDA);

    double totalExtraAmount = 0;
    for (int i = 0; i < 3; i++) {
        employees[i].grossSalary = employees[i].basicSalary + employees[i].basicSalary * employees[i].DA + employees[i].basicSalary * employees[i].HRA;
        printf("Gross salary of employee %d is: %.2f\n", employees[i].employeeID, employees[i].grossSalary);

       
        employees[i].DA += ((double)newDA / 100); 
        double newGrossSalary = employees[i].basicSalary + employees[i].basicSalary * employees[i].DA + employees[i].basicSalary * employees[i].HRA;
        printf("New gross salary of employee %d is: %.2f\n\n", employees[i].employeeID, newGrossSalary);

        // Calculate extra amount the company needs to pay
        double extraAmount = newGrossSalary - employees[i].grossSalary;
        totalExtraAmount += extraAmount;
    }

    printf("Total extra amount the company needs to pay after change of DA is: %.2f\n", totalExtraAmount);

    return 0;
}