#include<stdio.h>
struct st
{
    int x:3;
    int y:5;
    char c:5;
    char v:1;
    //double d:4;// error: bit-field 'd' has invalid type.
    //float f:2;// error: bit-field 'd' has invalid type.
};
int main()
{
    struct st a1;
    //printf("Length of x: %d, Length of y: %d",sizeof(a1.x),sizeof(a1.y)); //error: 'sizeof' applied to a bit-field.
    printf("Length of st in bytes: %d",sizeof(a1));
}
