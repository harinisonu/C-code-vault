#include<stdio.h>
int change_val(int &m, int &n)
{
    *m = 6, *n = 7;
}
int main()
{
    int *a = 2, *b = 3;
    printf("Before Function call: %d, %d"*a,*b);
    change_val(&, *b);
    printf("After Function call: %d, %d"*a,*b);
}
