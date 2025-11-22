#include <stdio.h>
union data
{
    int i;
    float f;
};
int main()
{
    union data d;
    
    d.i=20;
    printf("d.i = %d\n",d.i);
    
    d.f=6.78;
    printf("d.f = %f\n",d.f);
    
    printf("d.i(after writing f) = %d\n",d.i);
    printf("d.f(after writing i) = %d\n",d.f);
}