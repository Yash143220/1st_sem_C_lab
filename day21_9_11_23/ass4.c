// wap using structure like employee (employee ID, name, contact no., entry time, exit time) find name and contact number of that employee who is spending more time in office(miminum 5 employee data should be entered)

#include <stdio.h>

typedef struct {
    int employeeID;
    char name[50];
    char contactNo[15];
    int entryTime;
    int exitTime;
} Employee;

int main() {
    Employee employees[5];

    for (int i = 0; i < 5; i++) {
        printf("Enter employee ID, name, contact number, entry time (in 24-hour format), and exit time for employee %d: ", i + 1);
        scanf("%d %s %s %d %d", &employees[i].employeeID, employees[i].name, employees[i].contactNo, &employees[i].entryTime, &employees[i].exitTime);
    }

    int maxTime = 0;
    Employee* employeeWithMaxTime = NULL;
    for (int i = 0; i < 5; i++) {
        int timeInOffice = employees[i].exitTime - employees[i].entryTime;
        if (timeInOffice > maxTime) {
            maxTime = timeInOffice;
            employeeWithMaxTime = &employees[i];
        }
    }

    if (employeeWithMaxTime != NULL) {
        printf("Employee spending the most time in office is %s with contact number %s\n", employeeWithMaxTime->name, employeeWithMaxTime->contactNo);
    } else {
        printf("No employee data entered\n");
    }

    return 0;
}

