#include<stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("file_handling_eg.txt","r");

    int num1, num2;
    char str[10];
    fscanf(fptr, "%d %s %d",&num1,&str,&num2); // only if content has same datatype values in same order we will be able to read.
    printf("%d %s %d",num1,str,num2);
    fclose(fptr);
}

