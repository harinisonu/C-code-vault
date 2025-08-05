#include<stdio.h>
int main()
{
    int a = 143, rem = 0, rev_num = 0;
    while(a){
        rem = a % 10;
        a = a / 10;
        rev_num = rev_num*10+rem;
    }
    printf("print reverse number : %d",rev_num);
}
