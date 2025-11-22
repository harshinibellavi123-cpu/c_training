//wrie a c program add 3 numbers call it by reference
#include <stdio.h>

void ref_value(int *a,int *b,int *c)
{
      int add = *a+*b+*c;
      printf("%d",add);
}
void main()
{
    int a=2;
    int b=3;
    int c=4;
    ref_value(&a,&b,&c);
}