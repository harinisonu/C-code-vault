#include<stdio.h>
int fl_sqrt(int root)//16
{
    if(root==0 || root==1)
        return root;
    int i=1,result=1;
    while(result<=root)//1<16
    {
        i++;//2
        result = i*i;//4
        printf("%d %d\n",i,result);
    }
    return (i-1);
}
int main()
{
    int squareroot = fl_sqrt(64);
    printf("\n%d",squareroot);
}
