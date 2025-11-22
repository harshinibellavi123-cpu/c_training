//write a function which will multiply three numbers and call it by refernce
#include <stdio.h>

void ref_value (int *a, int *b, int *c)
{
    int product = (*a)*(*b)*(*c);
    printf("%d\n",product);
}


void main()
{
    int a = 8;
    int b = 5;
    int c = 2;
    printf("call by ref:\n");
    ref_value(&a,&b,&c);
}