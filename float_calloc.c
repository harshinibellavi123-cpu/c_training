#include <stdio.h>
#include <stdlib.h>
void main()
{
    float *p = (float *)calloc(4,sizeof(float));
    p[0] = 38.79;
    p[1] = 96.87;
    p[2] = 34.57;
    p[3] = 12.89;
    printf("%f %f %f %f",p[0],p[1],p[2],p[3]);
    free(p);
}