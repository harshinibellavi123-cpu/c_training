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
struct student s1;
strcpy(s1.name,"anju");
s1.age=18;
s1.marks=85.5;

struct student s2;
strcpy(s2.name,"ammu");
s2.age=17;
s2.marks=78.5;
    

struct student s3;
strcpy(s3.name,"poo");
s3.age=17;
s3.marks=59.7;

printf("%s\n",s1.name);
printf("%s\n",s2.name);
printf("%s\n",s3.name);
printf("%d\n",s1.age);
printf("%d\n",s2.age);
printf("%d\n",s3.age);
printf("%f\n",s1.marks);
printf("%f\n",s2.marks);
printf("%f\n",s3.marks);


}

    