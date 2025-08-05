#include<stdio.h>
int main()
{
    int a = 5;
    int *b = & a; // good practice
    printf("print value of a: %d, b: %d, *b: %d\n",a,b,*b);
    *b = 10;
    printf("print value of a: %d, b: %d, *b: %d\n",a,b,*b);
    //b = 10; // Giving value to address will cause nothing will work.
    //printf("print value of a: %d, b: %d, *b: %d\n",a,b,*b);
}
