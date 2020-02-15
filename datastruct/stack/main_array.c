#include "stack_array.h"

int main()
{
    STACK *stk;
    int num,opt;
    printf("Creating stack...\n");
    stk = create_stack();
    printf("stack creation done\n");
    while(1) {
    printf("enter choice : \n1)PUSH:\n2)POP:\n");
    scanf("%d",&opt);
    switch(opt)
    {
        case 1:
            printf("enter element you want to push in stack\n");
            scanf("%d",&num);
            push(stk,num);
            break;
        case 2:
            printf("case 2\n");
            num = pop(stk);
            printf("Poped element...%d\n",num);
            break;
        default:
            printf("Wrong option\n");
    }
  }
    return 0;   
}
