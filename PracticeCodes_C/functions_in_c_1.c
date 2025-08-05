#include<stdio.h>
int area = 1,l,b;
int rectangle(l, b);

int main()
{
    area = rectangle(2,3);
    printf("Area of Rectangle: %d\n",area);
}

int rectangle(l, b)
{
    area = l*b;
    return area;
}
