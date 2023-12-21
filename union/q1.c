#include <stdio.h>
#include <string.h>
union Student
{
    char name[100];
    int roll;
    float marks;
};

int main(int argc, char const *argv[])
{
    union Student s;
    s.marks = 455.3456;
    strcpy(s.name, "shu");
    printf("%s\n", s.name);
    printf("%.2f\n", s.marks);
    printf("%d\n", s.roll);
}