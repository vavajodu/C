#include"circular_node.h"
int main()
{
    char ch;
    CIRCULAR_LL *head=NULL;
    unsigned int option;
    do {
        printf("choose the option\n");
        printf("1) Add end\n"
               "2) Add begin\n"
               "3) Delete end\n"
               "4) Delete begin\n"
               "5) print list\n");
        scanf("%d",&option);
        switch(option)
        {
            case 1 :
                add_end(&head);
                break;
            case 2 :
                add_begin(&head);
                break;
            case 3 :
                delete_end(&head);
                break;
            case 4 :
                delete_begin(&head);
                break;
            case 5 :
                print_list(head);
                break;
            default :
                printf("Invalid option\n");
                break;
        }
        printf("Do you want to continue\n");
        scanf(" %c",&ch);
    }
    while(ch =='y' || ch =='Y');
    return 0;
}
