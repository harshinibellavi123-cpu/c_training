#include <stdio.h>
#include <stdlib.h>
void main()
{
    float *p = (float *)malloc(4*sizeof(float));
    p[0] = 98.79;
    p[1] = 43.87;
    p[2] = 87.57;
    p[3] = 89.89;
    printf("%f %f %f %f",p[0],p[1],p[2],p[3]);
    free(p);
}