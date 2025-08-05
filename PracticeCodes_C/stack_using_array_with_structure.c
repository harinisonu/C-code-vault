#include <stdio.h>
#include <stdlib.h>

#define MAX 100 // Define the maximum size of the stack

typedef struct {
    int arr[MAX];
    int top;
} Stack;

void init(Stack *s) {
    s->top = -1;
}

int isFull(Stack *s) {
    return s->top == MAX - 1;
}

int isEmpty(Stack *s) {
    return s->top == -1;
}

void push(Stack *s, int value) {
    if (isFull(s)) {
        printf("Stack Overflow!\n");
        return;
    }
    s->arr[++(s->top)] = value;
    printf("%d pushed to stack\n", value);
}

int pop(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack Underflow!\n");
        return -1;
    }
    return s->arr[(s->top)--];
}

void display(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack is empty.\n");
        return;
    }
    printf("Stack elements are:\n");
    for (int i = s->top; i >= 0; i--) {
        printf("%d ", s->arr[i]);
    }
    printf("\n");
}

int main() {
    Stack s;
    init(&s);

    push(&s, 10);
    push(&s, 20);
    push(&s, 30);

    display(&s);

    printf("%d popped from stack\n", pop(&s));
    display(&s);

    return 0;
}


/*
Notes:
############

Explanation:

Define the Stack: We use a struct to define the stack with an array and a top variable to keep track of the top element.

Initialization: The init function initializes the stack by setting top to -1.

Check Full/Empty: isFull checks if the stack is full, and isEmpty checks if the stack is empty.

Push: The push function adds an element to the stack if it’s not full.

Pop: The pop function removes and returns the top element of the stack if it’s not empty.

Display: The display function prints all the elements in the stack from top to bottom.

You can modify the MAX constant to change the size of the stack as needed. This code provides a basic implementation of a stack using an array in C.

############
*/
