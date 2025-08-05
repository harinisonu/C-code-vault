#include<stdio.h>
#include<string.h>
struct details
    {
        char name[10];
        int rollno;
        float marks;
    };

int main()
{
    struct details d1;
    //d1.name = "Wiztech"; Error: assignment to expression with array type
    strcpy(d1.name,"Wiztech");
    d1.rollno = 2;
    d1.marks = 99.5;
    printf("Structure details of student:\n Student Name: %s\n Roll No: %d\n Marks: %f\n",d1.name,d1.rollno,d1.marks);
}
