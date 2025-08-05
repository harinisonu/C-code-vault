#include <stdio.h>
#include <stdlib.h>
#include <string.h>

union address {
    char c;
    int a;
    float b;
};
int main()
{
    union address a1;
    //strcpy(a1.c, "Welcome");
    a1.c = 'a'; // it doesnt print
    a1.a = 10;
    a1.b = 15.25;// value which is given last it takes that value only.
    printf("Length of int: %d\nLength of float: %d\nLength of char: %d\nLength of union data: %d\n",sizeof(a1.a),sizeof(a1.b),sizeof(a1.c),sizeof(a1));
    printf("a1.a: %d\na1.b %f\na1.c %c",a1.a,a1.b,a1.c);
}
