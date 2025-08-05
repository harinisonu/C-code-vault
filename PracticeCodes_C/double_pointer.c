#include<stdio.h>
int main()
{
    printf("Integer Double Pointer");
    int b = 10;
    int *a;
    a = &b;
    int **c;
    c = &a;
    printf("*c: %d\n", *c);
    printf("**c: %d\n", **c);
    printf("Character Double Pointer");
    char val = 'a';
    char *val_1;
    val_1 = &val;
    char **val_2;
    val_2 = &val_1;
    printf("*val_1: %d\n", *val_1);
    printf("**val_2: %d\n", **val_2);
    printf("Float Double Pointer");
    float b = 10;
    int *a;
    a = &b;
    int **c;
    c = &a;
    printf("*c: %d\n", *c);
    printf("**c: %d\n", **c);
}
