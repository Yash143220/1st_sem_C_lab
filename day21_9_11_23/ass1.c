//wap to find roll number of a student who scored highest mark (minimum 6 students marks should be entered using array) 

#include<stdio.h>

int main()
{
    int n,i ;
    printf("Enter number of student:\n");
    scanf("%d",&n);

    int roll[n],marks[n];

    for ( i = 0; i < n; i++)
    {
        printf("Enter roll number and marks of student %d:",i+1);
        scanf("%d%d",&roll[i],&marks[i]);
    }

    int highest = marks[0];
    int rolln = roll[0];

    for ( i = 1; i < n; i++)
    {
        if (marks[i] > highest)
        {
            highest = marks[i];
            rolln = roll[i];
        }
        
    }

    printf("Student with roll number %d scored highest marks %d",rolln,highest);
    
    
}