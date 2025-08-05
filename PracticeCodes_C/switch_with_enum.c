#include<stdio.h>
enum weekdays
    {
        mon,
        tue,
        wed,
        thu,
        fri
    };
int main()
{
    int option;
    scanf("%d",&option);
    enum weekdays week = option;
    switch(week)
    {
    case 0:
        printf("Its Monday");
        break;
    case 1:
        printf("Its Tuesday");
        break;
    case 2:
        printf("Its Wednesday");
        break;
    case 3:
        printf("Its Thursday");
        break;
    case 4:
        printf("Its Friday");
        break;
    }

}
