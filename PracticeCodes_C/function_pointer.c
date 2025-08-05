#include<stdio.h>
int add ()
{
    int x=5, y=6;
    return x+y;
}
int main()
{
    //int (*fun)(int,int) = add;
    int (*fun)() = &add;
    //int val = fun(3,4);
    int val = (*fun)();
    printf("val: %d",val);
}
