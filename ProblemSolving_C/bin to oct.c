#include<stdio.h>
#include<math.h>
long int bin_to_deci();
long int deci_to_oct();
long int bin_to_deci(long int num)
{
    long int temp=0,last=0,count=0;
    long int deci_num=0;
    while(num)
    {
       last=num%10;
        temp=pow(2,count);
        temp = last*temp;
        deci_num = deci_num+temp;
        count++;
        num /= 10;
    }
    return deci_num;
}
long int deci_to_oct(long int num)
{
    long int last=1,oct_num=0;
    while(num)
    {
        oct_num=oct_num + (num%8)*last;
        last = last *10;
        num/=8;
    }
    return oct_num;
}
int main()
{
    long int num,deci_num,oct_num;
    scanf("%ld",&num);
    deci_num = bin_to_deci(num);
    oct_num = deci_to_oct(deci_num);
    printf("%ld",oct_num);
}
