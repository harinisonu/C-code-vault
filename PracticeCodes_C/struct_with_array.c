#include<stdio.h>
struct person
{
    char name[12];
    int age;
};

// structure as return datatype in function
struct person Createperson(char *name, int age)
{
    struct person new1;
    snprintf(new1.name, sizeof(new1.name),"%s",name);
    new1.age = age;
    return new1;
}
int main()
{
    struct person p1 = Createperson("Alice",28);
    printf("%s",p1.name);
    printf("%d",p1.age);
}
