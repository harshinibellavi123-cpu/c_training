#include <stdio.h>
int search(int arr[],int key,int n)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i]==key)
        return 1;
    }
    return 0;
}
void main()
{
    int key;
    int n;
    printf("enter key:\n");
    scanf("%d",&key);
    printf("enter n:\n");
    scanf("%d",&n);
    int search(&key,&n);
}