#include<stdio.h>
#include<stdlib.h>

typedef struct LinkedList {
     struct LinkedList *prev;
     int num;
     struct LinkedList *next;
}LinkedList;

#define CHECK_HEAD(hdr) if(hdr == NULL){\
                            printf("List is empty\n");\
                            return;\
                        }
void Add_begin(LinkedList **hdr);
void Add_end(LinkedList **hdr);
void Add_middle(LinkedList **hdr);

void Delete_begin(LinkedList **hdr);
void Delete_end(LinkedList **hdr);
void Delete_middle(LinkedList **hdr);
void Print_list(LinkedList *hdr);
unsigned int Count_node(LinkedList *hdr);

void Print_list(LinkedList *hdr)
{
    if(!hdr) {
        printf("Print_list: List is empty\n");
        return;
    }
    LinkedList *temp = hdr;
    while(temp)
    {
        printf("%d ",temp->num);
        temp=temp->next;
    }
    printf("\n");
}
unsigned int Count_node(LinkedList *hdr)
{
    unsigned int count=0;
    LinkedList *temp = hdr;
    while(temp)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
void Add_begin(LinkedList **hdr)
{
    LinkedList *temp = NULL;
    temp = malloc(sizeof(LinkedList));
    if(!temp)
    {
        printf("Add_begin: memory allocation failed at line %d\n",__LINE__);
        return;
    }
    printf("Enter the number\n");
    scanf("%d",&(temp->num));
    temp->prev = NULL;
    temp->next = *hdr;
    if(*hdr)
        (*hdr)->prev = temp;
    *hdr = temp;
}
void Add_end(LinkedList **hdr)
{
    if(*hdr == NULL) {
        printf("Add_End: This is the first node\n");
        Add_begin(hdr);
        return;
    }
    else {
        LinkedList *temp,*temp1;
        temp = *hdr;
        temp1=malloc(sizeof(LinkedList));
        if(!temp1)
        {
            printf("Add_end: memory allocation failed\n");
            return;
        }
        printf("Enter the number\n");
        scanf("%d",&(temp1->num));
        temp1->next=NULL;
        while(temp->next)
            temp=temp->next;
        temp1->prev=temp;
        temp->next=temp1;
    }
}
void Add_middle(LinkedList **hdr)
{
    if(*hdr == NULL) {
        printf("Add_middle: Adding first node\n");
        Add_begin(hdr);
    }
    else {
        LinkedList *temp,*temp1;
        unsigned int position, count =1;
        temp1=malloc(sizeof(LinkedList));
        if(!temp1) {
            printf("Add_middle: memory allocation failed\n");
            return;
        }
        printf("enter the position\n");
        scanf("%d",&position);
        if(position == 1)
            Add_begin(hdr);
        else if(position > Count_node(*hdr)) {
            printf("Add_middle: Position is greater than total nodes so adding node at end\n");
            Add_end(hdr);
        }
        else {
            temp = *hdr;
            printf("Enter the number\n");
            scanf("%d",&(temp1->num));
            while(temp->next) {
                count ++;
                if(count == position){
                    temp->next->prev = temp1;
                    temp1->next = temp->next;
                    temp1->prev = temp;
                    temp->next = temp1;
                    break;
                }
                else
                    temp = temp->next;
            }
        }
    }
}
void Delete_begin(LinkedList **hdr)
{
     CHECK_HEAD(*hdr);
     LinkedList *temp;
     temp = *hdr;
     *hdr = (*hdr)->next;
     if((*hdr)!=NULL)
         (*hdr)->prev = NULL;
     free(temp);
}
void Delete_end(LinkedList **hdr)
{
    CHECK_HEAD(*hdr);
    LinkedList *temp;
    temp = *hdr;
    while(temp->next)
        temp = temp->next;
    if(temp->prev)
        temp->prev->next = NULL;        //setting last node
    else
    {
        printf("temp->prev = %p\n",temp->prev);
        *hdr = NULL;
    }
    free(temp);
}
void Delete_middle(LinkedList **hdr)
{
    CHECK_HEAD(*hdr);
    unsigned int position, count;
    count = Count_node(*hdr);
    LinkedList *temp;
    printf("Enter the position of the node, you want to delete\n");
    scanf("%d",&position);
    if(position == 1)
    {
        Delete_begin(hdr);
        return;
    }
    else if(position == count || position > count)
    {
        (position > count) ? printf("Postion is greater than total node\n") : printf("Postion equal to count\n"); 
        Delete_end(hdr);
        return;
    }
    temp = *hdr;
    count = 1;
    while(temp->next) {
        if(count == position) {
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
            free(temp);
            break;
        }
        count ++;
        temp = temp->next;
    }
}
