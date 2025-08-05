// Macros - Examples

# include <stdio.h>
# define PI 3.14
# define PRINTLOOP(r)\
    do{\
    printf("Macro loop: %d",r);\
    }while(0);

#define SQUARE(x) ((x) * (x)) //function like macros
#define STRINGIZE(x) #x //Stringizing
#define CONCATENATE(x,y) x##y //token pasting -> concatenation
int main(){
 int r = 2;
 printf("area: %.1f\n",PI*r*r);
 PRINTLOOP(2);
 int ans = SQUARE(2);
 printf("\nsquare: %d",ans);
 printf("\nSTRINGIZE: %s", STRINGIZE(2));
 printf("\nCONCATENATE: %d", CONCATENATE(2,3));
}
