#include <stdio.h>
void display(int*p, int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d ",*(p+i)); // a[5] = 5th element; a+5 = address; *(a+5) = value
    }
}
/*void display(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d ",a[i]); // a[5] = 5th element; a+5 = address; *(a+5) = value
    }
}*/
int main()
{
    //Array values accessed by pointers
    int a[5]={1,2,3,4,5};
    display(&a[0], 5);
    //display(a,5);
}
