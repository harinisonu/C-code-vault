#include<stdio.h>

int main()
{
    char str[100];
    FILE *fp = fopen("file_handling_eg.txt","r");
    if(fp == NULL)
    {
        printf("null");
        return 1;
    }
   while(fgets(str, sizeof(str), fp) != NULL)
    {
        printf("%s",str);
    }
    char a[50], b[50], c[50];
    while(fscanf(fp,"%49s %49s %49s",a,b,c) == 3)
        printf("%s%s%s",a,b,c);
}
