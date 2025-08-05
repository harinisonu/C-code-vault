// Array of pointers to functions

#include<stdio.h>
void Asc(int*arr, int n)
{
    printf("Print Ascending Order\n");
    int temp = 0;
    for(int i=0; i<n; i++)
    {
        for(int k=i+1; k<n; k++)
        {
            if(*(arr+i) > *(arr+k))
            {
                temp = *(arr+i);
                *(arr+i) = *(arr+k);
                *(arr+k) = temp;
            }
        }
    }
    for (int j=0; j<n; j++)
        printf("%d\n",*(arr+j));
}
void Dsc(int*arr, int n)
{
    printf("Print Descending Order\n");
    int temp = 0;
    for(int i=0; i<n; i++)
    {
        for(int k=i+1; k<n; k++)
        {
            if(*(arr+i) < *(arr+k))
            {
                temp = *(arr+i);
                *(arr+i) = *(arr+k);
                *(arr+k) = temp;
            }
        }
    }
    for (int j=0; j<n; j++)
        printf("%d\n",*(arr+j));
}

int main()
{
    int arr[5] = {8,4,9,1,3};
    int arr1[5], arr2[5];
    int n=5;
    void (*fun_arr[2])();
    fun_arr[0] = Asc;
    fun_arr[1] = Dsc;

    fun_arr[0](arr, n);
    fun_arr[1](arr, n);

}
