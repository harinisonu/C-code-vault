#include <stdio.h>
int factorial(int n)
{
    int res=1, i=2;
    for (i; i <= n; i++){
        res *= i;
        printf("res = %d",res);
    }
    return res;
}

int main()
{
    int num;
    printf("Enter number to find factorial: ");
    scanf("%d",&num);
    printf("Factorial of %d is %d", num, factorial(num));
}
