#include<stdio.h>
int * sort(int *arr,int size)
{
    for(int ind1=0;ind1<size;ind1++)
    {
        for(int ind2=ind1+1;ind2<size;ind2++)
        {
            if(arr[ind1]>arr[ind2])
            {
                int temp=0;
                temp = arr[ind1];
                arr[ind1] = arr[ind2];
                arr[ind2] = temp;
            }
        }
    }
    return arr;
}
int main()
{
    int arr[]={10,5,2,3,1,4,9};//1,2,3,4,5,9,10
    int size = sizeof(arr)/sizeof(arr[0]);
    /*for(int ind=0;ind<10;ind++)
    {
        scanf("%d ",arr+ind);
    }*/
    int *arrptr = sort(arr,size);
    //printf("%d",size);

    for(int ind=0;ind<size;ind++)
    {
        printf("%d %d\n",arr[ind],*(arrptr+ind));
    }
}
