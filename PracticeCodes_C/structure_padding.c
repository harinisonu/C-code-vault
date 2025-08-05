#include<stdio.h>
int main()
{
    struct student
    {
        int number;
        char letter;
        float h;
    }a;

    printf("size of char: %d\nsize of integer: %d\nsize of float: %d\nsize of structure: %d\n",sizeof(a.letter),sizeof(a.number),sizeof(a.h),sizeof(a));

    /*
    size of char: 1
    size of integer: 4
    size of structure: 8

    size of char when given inside structure it takes 4 bytes instead of 1, this is structure padding.
    */
}
