#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n+1];
    long sum[n+1];
    /*
    for(int ind=1;ind<=n;ind++)
    {
        scanf("%d",&arr[ind]);
    }
    */
    sum[0]=0;
    for(int ind=1;ind<=n;ind++)
    {
        sum[ind]=arr[ind]+sum[ind-1];
    }
    for(int ind=0;ind<=n;ind++)
    {
        printf("%d",sum[ind]);
    }
    int right=sum[n],left=0;
    for(int ind=1;ind<=n;ind++)
    {
        right=right-arr[ind];
        if(left==right)
        {
            printf("%d ",arr[ind]);
        }
        left=sum[ind];
    }

}
