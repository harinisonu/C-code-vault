#include<stdio.h>
int main()
{
    int arr[2][3] = {{1,2,3},{4,5,6}};
    int*val = arr[0];
    int size = sizeof(arr)/sizeof(arr[0][0]);
    printf("Given array:\n");
    // print the 2d array using pointers
    for(int l=0; l<size; l++)
        printf("%d ",*(val+l));
    // Find Second largest value in array using pointers
    int temp;
    for(int i=0; i<size; i++)
    {
        for(int k=i+1; k<size; k++)
        {
            if(*(val+i) < *(val+k))
            {
                temp = *(val+i);
                *(val+i) = *(val+k);
                *(val+k) = temp;
            }
        }
    }
    printf("\nSecond largest Value = %d\n",*(val+1));
}
