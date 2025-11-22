//create a structure with 3 variable name of the car, maximum speed, price.
//store this in array of structure and display them.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct car
{
    char name[100];
    float speed;
    int price; 
};

void main()

{
        int n;
    printf("enter number of car:");
    scanf("%d",&n);
    struct car c[n];
    for(int i=0; i<n;i++)
    {
        printf("enter name of the car:");
        scanf("%s",c[i].name);
        
        printf("enter speed of the car:");
        scanf("%d",&c[i].speed);
        
        printf("enter price of the car:");
        scanf("%d",&c[i].price);
    }
        printf("your information:\n");
    for(int i=0; i<n;i++)
    {
        printf("%s\n",c[i].name);
         printf("%d\n",c[i].speed);
          printf("%d\n",c[i].price);
    }

}



