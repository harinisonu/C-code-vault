#include<stdio.h>
#include<stdio.h>
#include<string.h>
struct Address
{
    char city[10];
    char street[10];
};
struct person
{
    char name[10];
    int age;
    struct Address add;
};

int main()
{
    struct person p1 = {"Person",20,{"Chennai","Anna nagar"}};

    printf("Structure details of person:\n name of person: %s\n age: %d\n address: %s, %s",p1.name,p1.age,p1.add.city,p1.add.street);
}
