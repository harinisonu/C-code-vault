#include<stdio.h>
// 1 -> object like macros
#define Pi 3.14

// 2 -> chain like macros
// Defines macros with already defined macros.
#define MAX 100
#define MIN 50
#define CON MAX > MIN

// 3 -> function like macros
// Defines macros with expressions.
#define SQUARE(x) x*x

// Inline macros (included in function macro)
// Defines macros with conditions.
#define Maxi(a,b) ((a)>(b)?(a):(b))

// Multiline macro
//#define TRUE for(i=0; i<=10; i++){printf("%d");a=b;}
// use backslack "\" for next line
#define TRUE(a) \
    for(int i=0; i<=10; i++)\
    {\
    printf("%d ",i);\
    printf("%d ;",a+i);\
    }

int main()
{
    printf("object like macros: %d\n",2*Pi);
    if(CON)
    {
        printf("chain like macros: MAX: %d\n",MAX);
    }
    printf("function like macros: MAX: %d\n",SQUARE(4));
    printf("Inline macros: %d\n",Maxi(2,3));
    printf("Multiline macros:\n");
    TRUE(2);
}
