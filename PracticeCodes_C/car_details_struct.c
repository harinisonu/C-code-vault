#include<stdio.h>
#include<string.h>
struct details
    {
        int type;
        char colour[10];
    };

int main()
{
    struct details c1,c2;
    strcpy(c1.colour,"red");
    c1.type = 3;
    strcpy(c2.colour,"white");
    c2.type = 1;

    printf("Structure details of car 1:\n Colour of car 1: %s\nCar 1 Type No: %d\n",c1.colour,c1.type);
    printf("Structure details of car 2:\n Colour of car 2: %s\nCar 2 Type No: %d\n",c2.colour,c2.type);
}
