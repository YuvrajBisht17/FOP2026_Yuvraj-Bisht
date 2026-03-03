#include <stdio.h>

#define MAX 50
 
struct Student
{
    int roll_no;
    char name[50];
    float marks[5];
    float total;
    float percentage;
    char result[20];
};

int main()
{
    struct Student s[MAX];
    int n, i, j;

    printf("Enter number of students: ");
    scanf("%d", &n);

    
    for(i = 0; i < n; i++)
    {
        printf("\nStudent %d Details\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &s[i].roll_no);

        printf("Enter Name: ");
        scanf("%s", s[i].name);

        s[i].total = 0;

        printf("Enter marks of 5 subjects:\n");
        for(j = 0; j < 5; j++)
        {
            scanf("%f", &s[i].marks[j]);
            s[i].total += s[i].marks[j];
        }

        
        s[i].percentage = s[i].total / 5;

        
        if(s[i].percentage >= 40)
            sprintf(s[i].result, "PASS");
        else
            sprintf(s[i].result, "FAIL");
    }

    printf("\n----- Student Results -----\n");

    for(i = 0; i < n; i++)
    {
        printf("\nRoll No: %d", s[i].roll_no);
        printf("\nName: %s", s[i].name);
        printf("\nTotal Marks: %.2f", s[i].total);
        printf("\nPercentage: %.2f%%", s[i].percentage);
        printf("\nResult: %s\n", s[i].result);
    }

    return 0;
}