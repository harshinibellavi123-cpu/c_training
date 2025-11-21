#include <stdio.h>
void display(int n)
{
    if(n>5)
    return;
    printf("%d",n);
    display(n+1);
}
void main()
{
    display(1);
}