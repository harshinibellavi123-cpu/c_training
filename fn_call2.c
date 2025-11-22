#include <stdio.h>
void sum_value (int a, int b)
{
    int sum = a + b;
    printf("%d\n",sum);
}

void ref_value (int *a, int *b)
{
    int sum = *a + *b;
    printf("%d\n",sum);
}


void main()
{
    int a = 80;
    int b = 50;
    printf("call by value:\n");
    sum_value(a,b);
    printf("call by ref:\n");
    ref_value(&a,&b);
}