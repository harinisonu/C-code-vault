#include<stdio.h>
#include <stdlib.h>
#include <limits.h>
long get_max(long num,long max)
{
    //printf("\nn = %ld m = %ld\n",num,max);
    if(num>max)
    {
        //printf("\npositive\n");
        //printf("%ld %ld %ld",neg,num,max);
        max=num;
    }
    return max;
}

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n+1];
    long mx=INT_MIN,final_max=INT_MIN,curr_sum=0;
    long sum[n+1];
    //long max[n+1];
    arr[0]=0,sum[0]=0;
    for(int ind=1;ind<=n;ind++)
    {
        scanf("%d",&arr[ind]);
        sum[ind]=arr[ind]+sum[ind-1];
        curr_sum=sum[ind];
        //printf("%d",curr_sum);
        mx = get_max(curr_sum,mx);
        //printf("%d",mx);
    }
    //printf("%d",mx);
    for(int ind=2;ind<n+1;ind++)
    {
        final_max = get_max(mx,final_max);
        printf("%d %d",final_max,mx);
        mx=sum[ind]-mx;
    }
    /*for(int ind=1;ind<=n+1;ind++)
    {
        printf("%d",max[ind]);
    }*/
    printf("%ld",final_max);

}
