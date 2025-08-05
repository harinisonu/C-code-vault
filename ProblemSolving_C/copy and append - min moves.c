#include<stdio.h>
#include<limits.h>
//#include<math.h>
#define LLD long long int
long long int fl_sqrt(long long int root)//16
{
    //if(root==0 || root==1)
      //  return root;
    LLD i=1,result=1;
    while(result<=root)//1<16
    {
        i++;//2
        result = i*i;//4
    }
    return (i-1);
}
int main()
{
    //int input = 16;
    LLD input = 19;
    LLD output=1,num;
    if(input==2)
        output=2;
    if(input==3)
        output=3;
    if(input>3)
    {
        long long int sqrt_root=fl_sqrt(input);
    //printf("%d",sqrt_root);
    LLD sum_of_factors,min_of_sum=INT_MAX;
    int flag=0;
    //printf("%d",output);
        for(num=2;num<=sqrt_root;num++)
        {
            sum_of_factors=0;
            if(input%num!=0)
            {
                output=input;
                //printf("prime : %d\n",output);
            }
            else//num=2
            {
                flag=1;
                LLD another_fact = input/num;//16/2=8 ; 16/4=4
                //printf("%lld %lld\n",num,another_fact);
                sum_of_factors=(another_fact+num);// 8+2=10 ; 4+4=8
                //printf("%d ",sum_of_factors);
                if(min_of_sum>sum_of_factors)
                {
                    min_of_sum=sum_of_factors;
                }
            }
            if(flag==1)
                output = min_of_sum;
        }
    }

    printf("%lld",output);
}
