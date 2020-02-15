#include"Node_operation.h"             //Including header file 
int main()
{
     LinkedList *head = NULL;
     unsigned int option;
     char choice;
     do {
     printf("Select option\n"
            "1) Add at begin\n"
            "2) Add at end\n"
            "3) Add at middle\n"
            "4) Print list\n"
            "5) Delete first node\n"
            "6) Delete last node\n"
            "7) Delete middle node\n");
     scanf("%d",&option);
     switch(option) {
         case 1:
              Add_begin(&head);
              break;
         case 2:
              Add_end(&head);
              break;
         case 3:
              Add_middle(&head);
              break;
         case 4:
              Print_list(head);
              break;
         case 5:
              Delete_begin(&head);
              break;
         case 6:
              Delete_end(&head);
              break;
         case 7:
              Delete_middle(&head);
              break;
         default:
              printf("main(): Invalid option\n");
              break;
     }
     printf("Do you want to contine\n");
     scanf(" %c",&choice);
     }
     while(choice =='y' || choice=='Y');
     return 0;
}
