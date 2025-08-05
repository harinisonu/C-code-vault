#include<stdio.h>
#define var_1(name, num) name##num
#define stringize_var(var) #var
#define string_token(n) printf("var" #n " = %d", ##n)
int main()
{
    int var1 = 100;
    printf("concatenate: %d\n",var_1(var, 1));
    printf("%s\n", stringize_var(var1)); // macro won’t expand in stringize.
    printf("%s = %d\n", stringize_var(var_1(var,1)), var1);
    string_token(1);
}
