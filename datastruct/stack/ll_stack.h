#include<stdio.h>
#include<stdlib.h>

typedef struct linked_list_stack{
    int n;
    struct linked_list_stack *next;
}LL_STACK;

void push(LL_STACK **,int);
int pop(LL_STACK **);
unsigned int IsEmpty(LL_STACK *hdr);
void print_stack(LL_STACK *hdr);

void print_stack(LL_STACK *hdr)
{
    LL_STACK *temp=hdr;
    while(temp) {
        printf("%d ",temp->n);
        temp = temp->next;
    }
    printf("\n");
}
unsigned int IsEmpty(LL_STACK *hdr)
{
    if(hdr == NULL)
        return 1;
    else
        return 0;
}
void push(LL_STACK **hdr, int num)
{
    LL_STACK *temp;
    temp = malloc(sizeof(LL_STACK));
    if(!temp)
    {
        printf("malloc failed\n");
        return;
    }
    temp->n = num;
    temp->next = *hdr;
    *hdr = temp;
}
int pop(LL_STACK **hdr)
{
    LL_STACK *temp;
    int data;
    if(IsEmpty(*hdr))
    {
        printf("Stack is empty\n");
        return -1;
    }
    temp = *hdr;
    *hdr = (*hdr)->next;
    data = temp->n;
    free(temp);
    return data;
}
