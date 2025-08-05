#include<stdio.h>
struct person
{
    char*name;
};

int main()
{
    struct person p1;
    int n = 5;
    p1.name = (char*)malloc(n*sizeof(char));
    //scanf("%s",&p1.name);
    fgets(p1.name,5,stdin); // `q4 letters + "\0" is printed.
    printf("%s",p1.name);
}
