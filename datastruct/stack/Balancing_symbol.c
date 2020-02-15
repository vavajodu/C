#include <stdio.h>
#include <stdlib.h>

typedef struct linked_list_stack{
    char ch;
    struct linked_list_stack *next;
}LL_STACK;

void push(LL_STACK **hdr, char ch);
unsigned int IsEmpty(LL_STACK *hdr);
char pop(LL_STACK **hdr);
int compare_symbol(const char poped, const char closing);

int main()
{
    LL_STACK *head = NULL;
    char ch, choice='y';
    char poped, closing;
    while(choice=='y' || choice=='Y') {
        printf("enter the character\n");
        scanf(" %c",&ch);
        if(ch == '(' || ch=='{' || ch=='[')
            push(&head,ch);
        else if(ch ==')' || ch==']' || ch=='}') {
            closing = ch;
            poped = pop(&head);
            if(poped == '0') {
                printf("stack is empty\n");
                continue;
            }
            if(compare_symbol(poped, closing))
                printf("Matching symbol\n");
            else {
                printf("No matching symbol\n");
                return 0;
            }
        }
        else
            printf("not a symbol\n");
        printf("Do you want to continue ?(y/n)\n");
        scanf(" %c",&choice);      
    }
    if(!(IsEmpty(head)))
        printf("Closing of symbol is pending\n");
    else
        printf("Properly closed\n");      
    return 0;
}    

void push(LL_STACK **hdr, char ch)
{
    LL_STACK *temp;
    temp = malloc(sizeof(LL_STACK));
    if(!temp)
    {
        printf("malloc failed\n");
        return;
    }
    temp->ch = ch;
    temp->next = *hdr;
    *hdr = temp;
}
unsigned int IsEmpty(LL_STACK *hdr)
{
    if(hdr == NULL)
        return 1;
    else
        return 0;
}
char pop(LL_STACK **hdr)
{
    LL_STACK *temp;
    char ch;
    if(IsEmpty(*hdr))
    {
        printf("Stack is empty\n");
        return '0';
    }
    temp = *hdr;
    *hdr = (*hdr)->next;
    ch = temp->ch;
    free(temp);
    return ch;
}
int compare_symbol(const char poped, const char closing)
{
    if(poped == '(') {
        if(closing ==')')
            return 1;
        else
            return 0;
    }
    else if(poped == '{') {
        if(closing == '}')
            return 1;
        else
            return 0;
    }
    else {
        if(closing ==']')
            return 1;
        else
            return 0;
    }
}
