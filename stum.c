#include <stdio.h>

struct student
{
    char name[100];
    float marks;
};

int main()
{
    struct student s[5];
    
    // Input students
    for (int i = 0; i < 5; i++)
    {
        printf("Enter name: ");
        scanf("%s", s[i].name);

        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (s[i].marks < s[j].marks)
            {
                struct student temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    printf("Highest marks: %f\n",s[0].marks);

    return 0;
}
