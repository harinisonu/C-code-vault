#include<stdio.h>
//typedef in structure
    typedef struct student
    //struct student
    {
        int age;
        char name;
    }s;
int main()
{
    /*
    //typedef basic
    typedef unsigned long long int ulli;
    ulli a = 100000000000;
    printf("%llu",a);
    */
    //typedef struct student s;
    s stud;
    scanf("%d",&stud.age);
    printf("%d\n",stud.age);
    scanf("%s",stud.name);
    printf("%s\n",stud.name);
    printf("size of structure: %d",sizeof(stud));

    //typedef in pointers

}
