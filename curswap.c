#include <stdio.h>
void fake_swap(float ca, float cb)
{
    float temp;
    temp = ca;
    ca = cb;
    cb = temp;
    printf("fake swap in fn:ca=%f  cb=%f\n",ca,cb);
}
void real_swap(float *pca, float *pcb)
{
    float temp;
    temp = *pca;
    *pca = *pcb;
    *pcb = temp;
    printf("real swap in fn:*ca=%f  *cb=%f\n",*pca,*pcb);
}
void main()
{
    float ca,cb;
    printf("enter currency ca:");
    scanf("%f",&ca);
    printf("enter currency cb:");
    scanf("%f",&cb);
    
    fake_swap(ca,cb);
    printf("fake swap:ca=%f  cb=%f\n",ca,cb);

    real_swap(&ca,&cb);
    printf("real swap:ca=%f  cb=%f\n",ca,cb);
}
