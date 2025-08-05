#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int ind=0;ind<n;ind++)
    {
        scanf("%d",&arr[ind]);
    }
    int k;
    scanf("%d",&k);
    int temp=0;
    for(int ind=0;ind<k;ind++)
    {
        temp=arr[n-1];
        //printf("%d",temp);
        for(int ind=n-1;ind>0;ind--)
        {
           arr[ind]=arr[ind-1];
        }
        arr[0]=temp;
    }
    int multiple=1,ans[]={0},c=0;
    for(int ind=0;ind<n;ind++)
    {
        if(ind%3==0 && ind!=0)
        {
            ans[c++]=multiple;
            printf("%d ",multiple);
            multiple=1;
        }
        multiple = arr[ind]*multiple;
    }
    printf("%d",multiple);
}
