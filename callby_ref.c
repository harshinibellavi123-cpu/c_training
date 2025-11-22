#include <stdio.h>
struct score
{
    float marks;
    int rank;
};

void edit(struct score *s1)
{
    printf("before changes in fn:%f\n,s1->marks");
    s1->marks = 94.9;
    printf("after changes in fn:%f\n,s1->rank");
}
void main()
{
    struct score s1 = {56,8,1};
    edit(&s1);
    printf("after change in main:%f\n",s1.marks);
}