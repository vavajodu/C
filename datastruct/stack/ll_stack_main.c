#include"ll_stack.h"

int main()
{
    LL_STACK *head = NULL;
    unsigned int option;
    int num,data;
    char ch;
    do {
        printf("Select option\n1)PUSH\n2)POP\n3)Print stack\n");
        scanf("%d",&option);
        switch(option) {
            case 1 : 
                printf("Enter the number you want to PUSH\n");
                scanf("%d",&num);
                push(&head, num);
                printf("Data pushed\n");
                break;
            case 2 :
                data = pop(&head);
                printf("Poped data : %d\n",data);
                break;
            case 3 :
                print_stack(head);
                break;
            default :
                printf("Invalid option, Please try again\n");
                break;
        }
        printf("Do you want to continue ? (y/n)\n");
        scanf(" %c",&ch);
     }
     while(ch == 'y' || ch == 'Y');
     return 0;
}
