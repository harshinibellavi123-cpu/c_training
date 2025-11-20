//write a c program to generate sum of natural number

#include <stdio.h>

int main()
{
    int result = 0;
    int n;
    printf("enter n: ");
    scanf("%d",&n);
    for (int i=1; i<=n, i++)
    {
        result = result + i;
    }
    printf("sum is:%d",result);
}