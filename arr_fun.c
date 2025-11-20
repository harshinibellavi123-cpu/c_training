#include <stdio.h>
#include <string.h>
int main()
{
char str1[20],str2[20];

printf("enter first string:");
scanf("%s",str1);
printf("enter second strinf:");
scanf("%s",str2);

if(strcmp(str1,str2)==0)
{
    printf("same\n");
}
else
{
    printf("not same\n");
}
return 0;
}