#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
    char name[100];
    int age;
    float marks;
};

void main()
{
struct student s1={"pari",18,98.09};

printf("%s\n",s1.name);
printf("%d\n",s1.age);
printf("%f\n",s1.marks);
}