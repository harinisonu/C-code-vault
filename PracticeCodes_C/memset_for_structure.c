#include<stdio.h>
int main()
{
    unsigned int x = 0b1010;
    // Bit Set
    printf("%d\n",x);
    printf("Bit Set\n");
    x = x|(1<<2);
    printf("%d\n",x);
    // Bit clear
    printf("Bit Clear\n");
    x = x & ~(1<<2);
    printf("%d\n",x);
    // Bit toggle
    printf("Bit Toggle\n");
    x = x^(1<<2);
    printf("%d\n",x);
    printf("Bit check\n");
    x = x&(1<<3);
    printf("%d\n",x); // if 1 displays -> 2 ^ bit value.
}
