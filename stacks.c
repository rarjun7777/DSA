// stacks using array

#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

struct Stack
{
    int top;
    unsigned capacity;
    int *array;
};

struct Stack *createStack(unsigned capacity)
{
    struct Stack *stack = (struct Stack *)malloc(sizeof(struct Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = (int *)malloc(stack->capacity * sizeof(int));
    return stack;
};

int isFull(struct Stack *stack)
{
    if (stack->top == stack->capacity - 1)
    {
        return 1;
    }

    else
    {
        return 0;
    }
}

int isEmpty(struct Stack *stack)
{
    if (stack->top == -1)
    {
        return 1;
    }

    else
    {
        return 0;
    }
}

void push(struct Stack *stack, int item)
{
    if (stack->top == stack->capacity - 1)
    {
        return;
    }

    else
    {
        stack->top++;
        stack->array[stack->top] = item;

        printf("%d\n", item);
    }
}

int pop(struct Stack *stack)
{
    if (stack->top == -1)
    {
        return 0;
    }

    else
    {
        stack->top;
        stack->array[stack->top];
        return stack->array[stack->top];
    }    

}

int peek(struct Stack *stack)
{
    if (isEmpty(stack))
        return INT_MIN;
    return stack->array[stack->top];
}

int main()
{
    struct Stack *stack = createStack(3);

    push(stack, 10);

    push(stack, 20);

    push(stack, 30);
    // top 2


    printf("%d popped from stack\n", pop(stack));

    push(stack,40);

    

 

    
 
    

    return 0;
}
