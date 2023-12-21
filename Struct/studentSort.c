#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct student
{
    char *name;
    int roll;
    double marks;
}STUDENT;

void display(STUDENT s[3],int n){
    STUDENT *p;
    for (int i = 0; i < n; i++)
    {
        p=&s[i];
        printf("\nStudent %d\t",i);
        printf("Name: %s",p->name);
        printf("Roll: %d",(*p).roll);
        printf("Marks: %.2lf",p->marks);
    }
}

int main(int argc, char const *argv[])
{
    STUDENT s[3];
    int n=3;
    for (int i = 0; i < n; i++)
    {
        s[i].name = (char*)malloc(20*sizeof(char));
        // strcpy(s[0].name,"Student1");
        // strcpy(s[0].name,"Student1");
        scanf(" %s",s[i].name);
        scanf("%d",&s[i].roll);
        scanf("%lf",&s[i].marks);
    }

    display(s,3);
    
    return 0;
}

