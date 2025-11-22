//create a union in c with two variables integer money and float variable tax
//take the money from the user and assign it money variable to the union
//take the tax from the user and assign it to tax variable in the unioin
//over write money variable inside the union 
#include <stdio.h>
union data
{
    int money;
    float tax;
};
void main()
{
    union data u;
    int m;
    printf("enter money:");
    scanf("%d",&m);
    u.money=m;
    printf("%d\n",u.money);
    
}