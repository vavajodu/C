#include<stdio.h>
#include<stdlib.h>

#define CHECK_HEAD(a) if(a==NULL) {\
                          printf("Head is NULL\n");\
                          return;\
                      }
typedef struct circular_linklist {
    int data;
    struct circular_linklist *next;
}CIRCULAR_LL;

void print_list(CIRCULAR_LL *head);
void add_end(CIRCULAR_LL **hdr);
void add_begin(CIRCULAR_LL **hdr);
void delete_end(CIRCULAR_LL **hdr);
void delete_begin(CIRCULAR_LL **hdr);

void print_list(CIRCULAR_LL *head)
{
    CIRCULAR_LL *temp = head;
    CHECK_HEAD(head)
    do
    {
         printf("%d ",temp->data);
         temp = temp->next;
    }
    while(temp != head);
    printf("\n");
}

void add_end(CIRCULAR_LL **hdr)
{
    CIRCULAR_LL *temp=NULL;
    temp = malloc(sizeof(CIRCULAR_LL));
    if(temp == NULL)
    {
        printf("memory allocation failed\n");
        return;
    }
    printf("Enter the number\n");
    scanf("%d",&(temp->data));
    if(*hdr == NULL)
    {
        temp->next = temp;
        *hdr = temp;
    }
    else
    {
        CIRCULAR_LL *temp1 = *hdr;
        while(temp1->next != *hdr)
            temp1 = temp1->next;
        temp1->next = temp;
        temp->next = *hdr;
    }
}
void add_begin(CIRCULAR_LL **hdr)
{
    CIRCULAR_LL *temp=NULL;
    temp = malloc (sizeof (CIRCULAR_LL));
    if(!temp)
    {
        printf("malloc failed\n");
        return;
    }
    printf("Enter the number\n");
    scanf("%d",&(temp->data));
    if(*hdr == NULL)
    {
        temp->next = temp;
        *hdr = temp;
    }
    else
    {
        CIRCULAR_LL *temp1 = *hdr;
        while(temp1->next != *hdr)
            temp1 = temp1->next;
        temp1->next = temp;
        temp->next = *hdr;
        *hdr = temp;
     }
}
void delete_end(CIRCULAR_LL **hdr)
{
    CIRCULAR_LL *ptail=*hdr,*last= *hdr;
    if(*hdr == NULL)
    {
        printf("List is empty\n");
        return;
    }
    else if ((*hdr)->next == (*hdr))
    {
        free(*hdr);
        (*hdr)=NULL;
    }
    else
    {
        while(last->next != *hdr)
        {
            ptail = last;
            last = last->next;
        }
        ptail->next = last->next;
        free(last);
    }    
}
void delete_begin(CIRCULAR_LL **hdr)
{
    CIRCULAR_LL *temp= *hdr, *temp1 = *hdr;
    if(*hdr == NULL)
    {
        printf("Delete_begin : List is emoty\n");
        return;
    }
    else if((*hdr)->next == *hdr)
    {
        free(*hdr);
        (*hdr) = NULL;
    }
    else {
    while(temp->next!=(*hdr))
        temp=temp->next;
    temp->next = (*hdr)->next;
    (*hdr) = (*hdr)->next;
    free(temp1);
    }
}

