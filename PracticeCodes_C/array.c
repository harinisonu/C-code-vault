#include<stdio.h>

int main()
{
    //int mark [] = {1,2,3,4,5}; // correct // if loop for scanf is 5.
    //int mark[] = {1,2,3}; // last 2 values are not stored properly.
    /*Enter 5 values: 1
    Enter 5 values: 4
    Enter 5 values: 7
    Enter 5 values: 8
    Enter 5 values: 9
    mark[i]: 1
    mark[i]: 4
    mark[i]: 7
    mark[i]: 3
    mark[i]: 10*/
    //int mark[]; // error: array size missing in 'mark'
    //int mark[5]; // correct // if loop for scanf is 5.
    //int mark[]={}; // Is this initialization crct?
    for (int i=0; i<5; i++)
    {
        printf("Enter 5 values: ");
        scanf("%d",&mark[i]);
    }
    for (int i=0; i<5; i++)
    {
        printf("mark[i]: %d\n",mark[i]);
    }
}
