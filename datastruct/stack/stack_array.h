#include<stdio.h>
#include<stdlib.h>

#define MAX_ELE 10

typedef struct stack {
    int capacity;
    int top;
    int *array;
}STACK;

STACK* create_stack();
int Isfull(STACK *stk);
void push(STACK *stk,int n);
int pop(STACK *stk);
int get_top(STACK *stk);
int IsEmpty(STACK *stk);
void print_stack(STACK *stk);

STACK* create_stack(void)
{
    STACK *stk;
    stk = malloc(sizeof(STACK));
    if(!stk)
    {
        printf("memory allocation failed\n");
        return stk;
    }
    stk->capacity = MAX_ELE;
    stk->top = -1;
    stk->array = malloc((stk->capacity) * sizeof(int));
    if(!(stk->array))
    {
        printf("memory allocation failed for stk\n");
        free(stk);
        stk = NULL;
        return stk;
    }
    return stk;
}
int Isfull(STACK *stk)
{
    return ((stk->top) == (stk->capacity)-1);
}
int IsEmpty(STACK *stk)
{
    if(stk->top == -1)
        return 1;
    else
        return 0;
}
void push(STACK *stk,int n)
{
    if(Isfull(stk))
    {
        printf("Stakc is full\n");
        return;
    }
    else
        stk->array[++(stk->top)] = n;
}
int pop(STACK *stk)
{
    if(IsEmpty(stk))
    {
        printf("Stack is empty\n");
        return 0;
    }
    else
        return stk->array[(stk->top)--];
}
void print_stack(STACK *stk)
{
    int i;
    for(i=0;i<=(stk->top);i++)
        printf("%d\n",stk->array[i]);
}
