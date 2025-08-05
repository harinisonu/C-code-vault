#include <stdio.h>
#include <stdlib.h>

#define MAX 2 // Maximum size of the stack

void push(int *stack, int *count_stack) {
    int element = 0;
    if (*count_stack == MAX - 1) {
        printf("Stack Overflow\n");
    } else {
        printf("Enter the element to push: ");
        scanf("%d", &element);
        (*count_stack)++;
        stack[*count_stack] = element;
        printf("New element pushed in stack: %d\n", stack[*count_stack]);
        for (int i = 0; i <= *count_stack; i++) {
            printf("Stack: %d\n", stack[i]);
        }
    }
}

void pop(int *stack, int *count_stack) {
    if (*count_stack == -1) {
        printf("Stack Underflow\n");
    } else {
        printf("Element popped from stack: %d\n", stack[*count_stack]);
        stack[*count_stack] = 0; // Not necessary, but resets the value
        (*count_stack)--;
        for (int i = 0; i <= *count_stack; i++) {
            printf("Stack: %d\n", stack[i]);
        }
    }
}

void peek(int *stack, int count_stack) {
    if (count_stack == -1) {
        printf("Stack is Empty\n");
    } else {
        printf("Top Element in stack: %d\n", stack[count_stack]);
    }
}

void isempty(int count_stack) {
    if (count_stack == -1) {
        printf("Stack is Empty\n");
    } else {
        printf("Stack is not Empty\n");
    }
}

void isfull(int count_stack) {
    if (count_stack == MAX - 1) {
        printf("Stack is Full\n");
    } else {
        printf("Stack is not Full\n");
    }
}

int main() {
    int count_stack = -1;
    int *stack = (int *)malloc(MAX * sizeof(int));
    isempty(count_stack);
    push(stack, &count_stack);
    push(stack, &count_stack);
    push(stack, &count_stack);
    peek(stack, count_stack);
    pop(stack, &count_stack);
    isempty(count_stack);
    isfull(count_stack);

    free(stack); // Free allocated memory
    return 0;
}
