#include<stdio.h>
enum weekdays
    {
        //mon = "rrrr", //error: enumerator value for 'mon' is not an integer constant.
        mon = 1,
        tue = 3,
        wed = 1,
        thu = 3,
    };
int main()
{
    // Method 1
    enum weekdays week = mon;
    week = 2;
    printf("%d",week);
    // Method 2
    for(int i=mon; i<=thu; i++)
        printf("%d",i);
}

