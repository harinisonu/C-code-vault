#include<stdio.h>
int main()
{
    int input=8;
    int or_ans = (10|47),count=0;
    //printf("or_ans : %d\n",or_ans);
    while(or_ans>0 && input>0)
    {
        int bit_1 = or_ans%2;
        int bit_2 = input%2;
        if(bit_1 != bit_2)
        {
            //printf("%d\n",count);
            count++;
        }
        or_ans /= 2;
        input/=2;
    }
    printf("%d",count+1);
}
