#include <stdio.h>
int stack[100];
int top = -1;
void push(int keepit);
int pop();
int peek();
#define EMPTY 0
#define NOT_EMPTY 1
int isEmpty();
int main()
{
    int arr[]={3,4,5,1,2};
    int arr_size;
    arr_size = sizeof(arr)/sizeof(arr[0]);
    for(int ind=0;ind<arr_size;ind++)
        push(arr[ind]);
    for(int ind=0;ind<arr_size;ind++)
        printf("%d ",stack[ind]);

}
void push(int keepit)
{
    top++;
    stack[top]=keepit;
}
int pop()
{
    int backup = stack[top];
    top--;
    return backup;
}
int peek()
{
    return stack[top];
}
int isEmpty()
{
    if(top == -1)
        return EMPTY;
    return NOT_EMPTY;
}
