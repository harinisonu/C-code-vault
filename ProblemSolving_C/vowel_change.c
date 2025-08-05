#include<stdio.h>
#include <stdlib.h>

int main()
{
    char s1[101],s2[101];
    scanf("%s\n%s",s1,s2);
    int count1=0,count2=0,arr1[50],arr2[50];
    for(int ind=0;s1[ind];ind++)
    {
        int num1 = (int)s1[ind];
        if(num1==97 || num1 == 101 || num1 == 105 || num1 ==111||num1==117 || num1==65||num==69||num==73||num==79||num==85)
        {
            arr1[ind]=ind;
            count1++;
        }
        int num2 = (int)s2[ind];
        if(num2==97||num2==101||num2==105||num2==111||num2==117||num2==65||num2==69||num2==73||num2==79||num2==85)
        {
            arr2[ind]=ind;
            count2++;
        }
    }
    if(count1==count2)
    {
        for(int ind=0;s1[ind];ind++)
        {
            char ch2,ch1;
            ch1 = s1[arr1[ind]];
            ch2 = s2[arr2[ind]];
            s1[arr1[ind]]=ch2;
            s2[arr2[ind]]=ch1;
        }
    }
    for(int ind=0;s1[ind];ind++)
    {
        printf("%s\n%s",arr1[ind],arr2[ind]);
    }

}
