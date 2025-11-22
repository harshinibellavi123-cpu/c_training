#include <stdio.h>
void sum_value (int a, int b)
{
    int sum = a + b;
    printf("%d\n",sum);
}

void sum_value (int *a, int *b)
{
    int sum = *a + *b;
    printf("%d\n",sum);
}


void main()
{
    int a = 80;
    int b = 50;
    sum_value(a,b);
    ref_value(&a,&b);
}