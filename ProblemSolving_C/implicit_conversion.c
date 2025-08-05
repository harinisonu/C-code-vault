// An example of implicit conversion
#include<stdio.h>
int main()
{
    int x = 10;    // integer x
    char y = 'a';  // character c

    // y implicitly converted to int. ASCII
    // value of 'a' is 97
    int k = x + y;

    // x is implicitly converted to float
    float z = x + 0.0;

    printf("y = %d, x = %f", y, x);
    return 0;
}
