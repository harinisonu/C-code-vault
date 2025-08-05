#include<stdio.h>
int main(){
    // if condition
    /*char a;
    printf("Enter any character:");
    scanf("%c",&a);
    if(a<'9')
    {
        printf("Digit");
    }
    if((a >= 'a')&&(a <= 'z'))
    {
        printf("Alphabet");
    }*/
    // if else condition
    int units;
    printf("Electricity -> Enter units consumed: ");
    scanf("%d",&units);
    int val = 0;
    if(units>100){
        val = units - 100;
        if(units>150 && units<200)
        {
            val = val*8;
            printf("units: %d, bill:%d",units,val);
        }
        else if(units>100 && units<=150)
        {
            val = val*5;
            printf("units: %d, bill:%d",units,val);
        }
    }
    else{
        val = 0;
        printf("units: %d, bill:%d",units,val);
    }
}
