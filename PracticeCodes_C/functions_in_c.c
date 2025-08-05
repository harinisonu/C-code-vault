#include<stdio.h>
#define pi 3.14
int circle(int r);
int area = 1;
int val = 0;

int square(int a)
{
    area = a*a;
    return area,1;
}

int rectangle(int l, int b)
{
    area = l*b;
    return area;
}

int main()
{
    area, val = square(5);
    printf("Area of Square: %d %d\n",area, val);
    area = circle(2);
    printf("Area of Circle: %d\n",area);
    area = rectangle(5,10);
    printf("Area of Rectangle: %d\n",area);
}

int circle(int r)
{
    area = pi*r*r;
    return area;
}
