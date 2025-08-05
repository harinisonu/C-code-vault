#include<stdio.h>
int main(){
    char choice; int val=0, value=0;
    printf("Calculations :\n");
    printf("Enter 1 to choose Celsius -> Farenheit conversion\n");
    printf("Enter a to choose Meters -> Feet conversion\n");
    printf("Enter 4 to choose Kilogram -> Pound conversion\n");
    scanf("%c",&choice);
    switch(choice)
    {
        case '1': printf("Celsius -> Farenheit Conversion:\n Enter Celsius value: \n");
                  scanf("%d",&val);
                  value = (val * 9/5) + 32;
                  printf("%d F",value);
                  break;

        case 'a': printf("Meters -> Feet conversion:\n Enter meters value: \n");
                  scanf("%d",&val);
                  value = val * 3.28;
                  printf("%d",value);
                  break;

        case '4': printf("Kilogram -> Pound conversion:\n Enter kg value: \n");
                scanf("%d",&val);
                value = val * 2.2;
                printf("%d lb",value);
                break;

        default: printf("Exit conversion calc");

    }
}
