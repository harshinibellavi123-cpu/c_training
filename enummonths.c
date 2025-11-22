#include <stdio.h>
enum month
{
    january=1,
    febraury,march,april,may,june,july,august,september,october,november,december
};
void main()
{
    enum month m;
    m = april;
    printf("%d",m);
}