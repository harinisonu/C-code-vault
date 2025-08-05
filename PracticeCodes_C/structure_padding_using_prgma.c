#include<stdio.h>
//#pragma pack(1) - allocates by each byte.
//#pragma pack(2) - allocates by 2 bytes.
//#pragma pack(3) - allocates by 4 bytes.
//#pragma pack(4) - allocates by 4 bytes.
//#pragma pack(5) - allocates by 4 bytes.
#pragma pack(8)

struct name
{
    int i;
    char c;
    float f;
    short s;
    double l;
};

int main()
{
    struct name a1;
    printf("Length of int: %d\nLength of char: %d\nLength of float: %d\nLength of short: %d\nLength of double: %d\nLength of struct data: %d\n",sizeof(a1.i),sizeof(a1.c),sizeof(a1.f),sizeof(a1.s),sizeof(a1.l),sizeof(a1));
}
