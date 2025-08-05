#include<stdio.h>
struct name
{
    int i;
    char c;
    float f;
    short s;
};
struct name_1
{
    int i;
    float f;
    short s;
    char c;
};

int main()
{
    struct name a1;
    struct name_1 a2;
    printf("Length of int: %d\nLength of char: %d\nLength of float: %d\nLength of short: %d\nLength of struct data: %d\n",sizeof(a1.i),sizeof(a1.c),sizeof(a1.f),sizeof(a1.s),sizeof(a1));
    printf("Length of int: %d\nLength of char: %d\nLength of float: %d\nLength of short: %d\nLength of struct data: %d\n",sizeof(a2.i),sizeof(a2.c),sizeof(a2.f),sizeof(a2.s),sizeof(a2));
}


