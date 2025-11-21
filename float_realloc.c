#include <stdio.h>
#include <stdlib.h>
void main()
{
    float*p = (float*)malloc(3*sizeof(float));
    p[0] = 14;
    p[1] = 10;
    p[2] = 23;
    
    p = (float*)realloc(p,5*sizeof(float));
    p[3] = 24;
    p[4] = 12;
    
    for(int i=0; i<=5; i++)
    printf("%f\n",p[i]);
}