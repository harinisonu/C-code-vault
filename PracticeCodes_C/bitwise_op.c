#include<stdio.h>
int main(){
    //Bitwise operators
    int a=5, b=7;
    printf("a: %d, b: %d, a&b: %d, a|b: %d, a^b: %d\n",a,b,a&b,a|b,a^b);
    a=10, b=10;
    printf("a: %d, b: %d, a<<1: %d, b>>1: %d, ~a: %d\n",a,b,a<<1,b>>1,~a);

    //Assignment operators
    int c=5, d=5, e=5, g=5, h=5;
    c <<= 1;
    d >>= 1;
    g &= c;
    h |= c;
    printf("left shift: %d, right shift: %d, ~ unary: %d, and: %d, or: %d\n",c,d,e,g,h);
}
