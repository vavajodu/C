#include<stdio.h>
#include<stdlib.h>

typedef struct ll_stack {
    char ch;
    struct ll_stack *next;
}LL_STACK;

void push(LL_STACK **hdr, char ch);
unsigned int IsEmpty(LL_STACK *hdr);
char pop(LL_STACK **hdr);
unsigned int IsEmpty(LL_STACK *hdr);
int precedence(const char ch1, const char ch2);

int main()
{
    LL_STACK *head=NULL;
    char ch[10],poped;
    int i=0;
    printf("enter the string\n");
    scanf("%s",ch);
    while(ch[i]) {
        if(ch[i] >='A' && ch[i] <='Z')
            printf("%c",ch[i]);
        else if(ch[i] == ')') {
            while((poped=pop(&head)) !='(')
                printf("%c",poped);
        }
        else {
            poped = pop(&head);
            while(poped != '0') {
                if(poped !='(' || !(precedence(ch[i],poped))) {
                    printf("%c",poped);
                }
                else
                    break;
                poped = pop(&head);
            }
            push(&head,ch[i]);
        }
    i++;
    }
    while((poped=pop(&head))!='0')
        printf("%c",poped);
    printf("\n");
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
//        printf("Stack is empty\n");
        return '0';
    }
    temp = *hdr;
    *hdr = (*hdr)->next;
    ch = temp->ch;
    free(temp);
    return ch;
}
int precedence(const char list, const char poped)
{
    int poped_pre, list_pre;
    if(list == '*' || list =='/' || list =='%')
        list_pre = 1;
    else if(list =='+'||list =='-')
        list_pre = 0;
    if(poped == '*' || poped =='/' || poped =='%')
        poped_pre = 1;
    else if(poped =='+'||poped =='-')
        poped_pre = 0;
    if(poped_pre > list_pre)
        return 1;
    else
        return 0;
}
