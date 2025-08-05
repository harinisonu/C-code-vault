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
    //int input[]={5,3,4,2,4};
   // int input[] = {3,5,8,10,12,15,9,10,12,11,8,6,5,5,3,1};
   //int input[] = {3,5,8,10,12,15};
     int input[] = {15,12,10,8,5,3};
    int input_size,input_ind,popped,area,max_area;
    STACK stackin;
    input_ind=0;
    max_area=0;
    input_size = sizeof(input)/sizeof(input[0]);
    stackin = create_stack(input_size);
    while(input_ind<input_size)
    {
        if(isEmpty(&stackin)==EMPTY || input[input_ind] >= input[peek(&stackin)])
        {
            push(&stackin,input_ind++);
        }
        else //input[input_ind] < input[peek(&stackin)]
        {
            popped = pop(&stackin);
            if(isEmpty(&stackin) == EMPTY)
            {
                area = input[popped]*(input_ind);
                printf("%d ",area);
                if(area > max_area)
                    max_area = area;
            }
            else
            {
                area = input[popped]*(input_ind - peek(&stackin) - 1);
                printf("%d ",area);
                if(area > max_area)
                    max_area = area;
            }
        }

    }
    while(isEmpty(&stackin) == NOT_EMPTY)
    {
        popped = pop(&stackin);
        if(isEmpty(&stackin) == EMPTY)
        {
            area = input[popped]*(input_ind);
            printf("%d ",area);
            if(area > max_area)
                max_area = area;
        }
        else
        {
            area = input[popped]*(input_ind - peek(&stackin) - 1);
            printf("%d ",area);
            if(area > max_area)
                max_area = area;
        }

    }
    printf("\nMAX AREA = %d",max_area);

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
