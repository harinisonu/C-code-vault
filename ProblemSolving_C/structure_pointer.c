#include<stdio.h>

struct Point
{
int x, y;
}*p2;

int main()
{
//struct Point p1 = {1, 2};

// p2 is a pointer to structure p1
//struct Point *p2 = &p1;
p2->x = 2;
p2->y = 3;

// Accessing structure members using structure pointer
printf("%d %d", p2->x, p2->y);
return 0;
}
