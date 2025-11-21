#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *p = (int *)malloc(4*sizeof(int));
    p[0] = 25;
    p[1] = 50;
    p[2] = 75;
    p[3] = 100;
    printf("%d %d %d %d",p[0],p[1],p[2],p[3]);
}