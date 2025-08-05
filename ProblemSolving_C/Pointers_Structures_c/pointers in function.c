#include <stdio.h>
int * sortarray(int *arr,int size)
{
    for(int ind = 0;ind<size;ind++)
     {
         for(int ind2 =ind+1;ind2<size;ind2++)
         {
             if(arr[ind]>arr[ind2])
            {
                int temp = arr[ind];
                arr[ind] = arr[ind2];
                arr[ind2] = temp;
            }
         }
     }
     for(int ind =0;ind<9;ind++)
        printf("%d %u\n",*(arr+ind),arr+ind);
    return arr;
}
int main()
{
    int arr[9]={1,2,3,4,56,78,6,8,9};
    int *bassaddress= arr;// bassaddress  == &arr[0]

    for(int ind =0;ind<9;ind++)
        printf("%d %u %d\n",*(bassaddress+ind),bassaddress+ind);   //

    printf("\nfunction \n");
    int *ptraarray = sortarray(arr,9);
    printf("\n");
    for(int ind =0;ind<9;ind++)
        printf("%d %u\n",*(ptraarray+ind),ptraarray+ind);
    // for(int ind =0;ind<9;ind++)
    //     printf("%d %d %u %d\n",*(bassaddress+ind),,bassaddress+ind);

    return 0;
}

