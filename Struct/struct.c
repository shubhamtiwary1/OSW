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
void display(STUDENT);
void initialize(STUDENT);

int main()
{
    struct Student s1;
    initialize(s1);
    display(s1);
    return 0;
}
void initialize(STUDENT s1)
{
    char temp[100];
    printf("Enter name : ");
    gets(temp);
    s1.name = (char *)malloc((strlen(temp) + 1) * sizeof(char));
    strcpy(s1.name, temp);
    printf("Enter roll no. : ");
    scanf("%d", &s1.roll);
    printf("Enter the marks : ");
    scanf("%lf", &s1.marks);
}
void display(STUDENT s1)
{
    printf("Name : %s\n", s1.name);
    printf("Roll no : %d\n", s1.roll);
    printf("Marks : %lf\n", s1.marks);
}