#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Student
{
    char *name;
    int roll;
    double marks;
};

typedef struct Student STUDENT;
void display(STUDENT[]);
void initialize(STUDENT[], int);

int main(int argc, char const *args[])
{
    STUDENT s[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the info of students %d: \n", i + 1);
        printf("Enter name : ");
        gets(s[i].name);
        // s[i].name = (char *)malloc(20 * sizeof(char));
        // scanf(" %[^\n]s", s[i].name);
        printf("Enter roll no. : ");
        scanf("%d", &s[i].roll);
        printf("Enter the marks : ");
        scanf("%lf", &s[i].marks);
        printf("\n");
    }

    display(s);
    return 0;
}
void display(STUDENT s1[])
{
    for (int i = 0; i < 3; i++)
    {
        printf("Name : %s\n", s1[i].name);
        printf("Roll no : %d\n", s1[i].roll);
        printf("Marks : %lf\n", s1[i].marks);
    }
    printf("\n");
}