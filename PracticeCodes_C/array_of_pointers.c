#include<stdio.h>
void point(int**arr, int size)
{
    for (int i=0; i<size; i++)
    {
        printf("Values of arrays: %d\n",**(arr+i));
        printf("Address of value: %p\n",*(arr+i));
        printf("Address of array: %p\n",(arr+i));
    }
}
int main()
{
    int a=1, b=2, c=3;
    int *arr[3];
    arr[0] = &a;
    arr[1] = &b;
    arr[2] = &c;
    int size = sizeof(arr);
    point(&arr, size);
}
