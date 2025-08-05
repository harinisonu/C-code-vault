#include <stdio.h>
int main(){
    int age;
    printf("Enter age:");
    scanf("%d",&age);
    ((age>0 && age<=100)?(printf("valid\n")&&(age>0 && age<=10)?printf("Child")
        :((age>10 && age<=18)?printf("teen")
        :((age>18 && age<=25)?printf("employee")
        :((age>25 && age<=40)?printf("manager")
        :((age>40 && age<=60)?printf("senior")
        :((age>60)?printf("retired"):""))))))
        :printf("invalid"));
}
