#include "add_end.h"
int main()
{
    NODE *first=NULL;
    NODE *odd=NULL,*even=NULL, *temp;
    int num,i;
    char ch;
    do {
        printf("Enter the number\n");
        scanf("%d",&num);
        add_end(&first, num);
        printf("Do you want to add another node?\n");
        scanf(" %c",&ch);
    }
    while(ch =='y' || ch=='Y');
    printf_node(first);
    GetOddNodes(first,&odd, &even);
    printf("Odd:\n");
    printf_node(odd);
    printf("Even:\n");
    printf_node(even);
    temp = even;
    while(temp->next)
        temp = temp->next;
    temp->next = odd;
    printf("After separation:\n");
    printf_node(even);  
    return 0;
}
     
