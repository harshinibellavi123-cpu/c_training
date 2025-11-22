#include <stdio.h>
#include <stdlib.h>
int main()
{
    int*p = (int*)malloc(3*sizeof(int));
    p[0] = 14;
    p[1] = 10;
    p[2] = 23;
    
    p = (int*)realloc(p,5*sizeof(int));
    p[3] = 24;
    p[4] = 12;
    
    for(int i=0; i<=5; i++)
    printf("%d",p[i]);
}