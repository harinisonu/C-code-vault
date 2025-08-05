#include<stdio.h>
#include<string.h>
int main()
{
    char c[] = "Welcome e"; // last character represents as null
    printf("%s\n",c);
    char b[10] = {'w','e','l','c','o','m','e','\0'};
    printf("%s\n",b);
    //gets
    char d[4];
    gets(d);
    //puts
    puts(d);
    //strlen
    printf("string length of c: %d\n",strlen(c));
    strcpy(b,c);
    printf("%s %s\n",b,c);
}
