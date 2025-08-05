#include<stdio.h>
int main()
{
    char *str = "Hello";
    char *temp = str;
    while(*temp != '\0')
    {
        printf("%c",*temp);
        temp++;
    }
}
