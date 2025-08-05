#include<stdio.h>
int main(int argc, char*argv[])
{
    printf("%s\n",argv[0]);
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);
    printf("%d %d",num1, num2);
}
