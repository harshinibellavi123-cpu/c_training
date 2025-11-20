#include <stdio.h>

int cube(int l,int b,int h)
{
    int cub = l*b*h;
    return cub;
}
void main()
{
    int l=9;
    int b=7;
    int h=3;
    printf("the vloume is:%d",cube(l,b,h));
}