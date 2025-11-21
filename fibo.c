#include <stdio.h>
void_fibo(int n)
{
int a = 0;
int b = 1;
int sum;
for(int i=1; i<n; i++)
{
printf("%d   ",a);
sum = a+b;
a=b;
b=sum;
}
}

void main()

{
    int n;
    printf("enter n:");
    scanf("%d",&n);
    fibo(n);
}