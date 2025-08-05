#include<stdio.h>
#include<malloc.h>

typedef struct stack
{
    int capacity;
    int top;
    int *store;

} STACK;

STACK create_stack(int stack_size);
void push(STACK*,int keepit);
int pop(STACK*);
int peek(STACK*);
#define EMPTY 0
#define NOT_EMPTY 1
int isEmpty(STACK*);
int main()
{
    int input[]={5,3,4,2,4};
    int input_size,input_ind,popped;
    STACK stackin;
    input_ind=0;
    input_size = sizeof(input)/sizeof(input[0]);
    stackin = create_stack(input_size);
    while(input_ind<input_size)
    {
      push(&stackin,input_ind++);
    }
    while(isEmpty(&stackin))
    {
        popped = pop(&stackin);
        printf("%d ",input[popped]);
    }
}

STACK create_stack(int stack_size)
{
    STACK temp;
    temp.capacity = stack_size;
    temp.top=-1;
    temp.store=(int*)malloc(stack_size * sizeof(int));
    return temp;
}
void push(STACK* s,int keepit)
{
    s->top++;
    s->store[s->top] = keepit;
}
int pop(STACK* s)
{
    int backup;
    backup = s->store[s->top];
    s->top--;
    return backup;
}
int peek(STACK* s)
{
    int backup;
    backup = s->store[s->top];
    return backup;
}
int isEmpty(STACK* s)
{
    if(s->top == -1)
        return EMPTY;
    return NOT_EMPTY;
}
