#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
    char name[100];
    float marks;
};

void main()
{
    struct student s[5];
    
    for(int i=0;i<5;i++) 
    {
        printf("enter name:");
        scanf("%s",s[i].name);
        
        printf("enter marks:");
        scanf("%f",&s[i].marks);
    }
}

    