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
void Reverse_stack(LL_STACK **);
void Insert_ele(LL_STACK **hdr, int data);

int main()
{
    LL_STACK *head=NULL;
    int data;
    char choice;
    do {
        printf("Enter the stack element\n");
        scanf("%d",&data);
        push(&head,data);
        printf("Do you want to add another element\n");
        scanf(" %c",&choice);
    }
    while(choice=='y' || choice=='Y');
    printf("Before reverse\n");
    print_stack(head);
    Reverse_stack(&head);
    printf("After reverse\n");
    print_stack(head);
    return 0;
}

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
        printf("push: malloc failed\n");
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
        printf("pop: Stack is empty\n");
        return -1;
    }
    temp = *hdr;
    *hdr = (*hdr)->next;
    data = temp->n;
    free(temp);
    return data;
}
void Reverse_stack(LL_STACK **hdr)
{
    int data;
    if(IsEmpty(*hdr))
        return;
    else {
        data = pop(hdr);
        Reverse_stack(hdr);
        Insert_ele(hdr,data);
    }
}
void Insert_ele(LL_STACK **hdr, int data)
{
    int temp;
    if(IsEmpty(*hdr))
    {
        push(hdr,data);
        return;
    }
    else
    {
        temp = pop(hdr);
        Insert_ele(hdr,data);
        push(hdr,temp);
        return;
    }
}
