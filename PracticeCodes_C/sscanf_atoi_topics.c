#include<stdio.h>
#include<stdlib.h>
int main()
{
    // sscanf
    char input[] = "123 abc 12.5";
    int k;
    char str[10];
    float fl;
    sscanf(input, "%d %s %f",&k,str,&fl);
    printf("Values: \n%d\n%s\n%f\n",k,str,fl);
    char input_1[] = "abc123";
    char digits[10];
    char letters[10];
    sscanf(input, "%[0-9] %[a-z A-z]",digits, letters);
    printf("Values: \n%s\n%s",digits, letters);

    //atoi -> ascii to integer
    char str[] = "123";
    int num = atoi(str);
    printf("string: %d",num);
    char str[] = "123.45";
    float num = atof(str);
    printf("string: %f",num);
    //atof -> ascii to float
}
