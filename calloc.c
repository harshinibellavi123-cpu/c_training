#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *p = (int *)calloc(4,sizeof(int));
    p[0] = 30;
    p[1] = 60;
    p[2] = 90;
    p[3] = 120;
    printf("%d %d %d %d",p[0],p[1],p[2],p[3]);
    free(p);
}