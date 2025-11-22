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
    char *season;
    switch(m)
    {
        case december: case january: case febraury:season="winter";
        break;
        case march: case april: case may:season="summer";
        break;
        case june: case july: case august:season="mansoon";
        break;
        case september: case october: case november:season="rainy";
        break;
        
    }
    printf("%d is %s",m,season);
}