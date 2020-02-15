#include<stdio.h>
#include<stdlib.h>

typedef struct linked_list_stack{
    int n;
    struct linked_list_stack *next;
}LL_STACK;

unsigned int IsEmpty(LL_STACK *hdr);
void push(LL_STACK **hdr, int num);
int pop(LL_STACK **hdr);
int top(LL_STACK *hdr);
void print_stack(LL_STACK *hdr);

int main()
{
    LL_STACK *main_head=NULL, *min_head=NULL;
    int option, data1, data2, num, min;
    char ch;
    do {
        printf("Select option\n1)PUSH\n2)POP\n3)get min\n4)print\n");
        scanf("%d",&option);
        switch(option) {
            case 1 : 
                printf("Enter the number you want to PUSH\n");
                scanf("%d",&num);
                push(&main_head, num);
                if(min_head == NULL)
                    push(&min_head,num);
                else {
                    min = top(min_head);
                    if(num <= min)
                        push(&min_head, num);
                }
                printf("Data pushed\n");
                break;
            case 2 :
                data1 = pop(&main_head);
                printf("Poped data1 : %d\n",data1);
                min = top(min_head);
                if(data1 == min){
                    data2 = pop(&min_head);
                    printf("Poped data2 : %d\n",data2);
                }
                break;
            case 3 :
                printf("Min : %d\n",top(min_head));
                break;
            case 4 :
                print_stack(min_head);
                break;
            default :
                printf("Invalid option, Please try again\n");
                break;
        }
        printf("Do you want to continue ? (y/n)\n");
        scanf(" %c",&ch);
    }
    while(ch == 'Y' || ch =='y');
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
int top(LL_STACK *hdr)
{
    if(IsEmpty(hdr))
        printf("Stack is empty\n");
    else
        return hdr->n;
}
