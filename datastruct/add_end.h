#include<stdio.h>
#include<malloc.h>
typedef struct node {
	int no;
	struct node *next;
	}NODE;

void add_end(NODE **head,int n);
void printf_node(NODE *ptr);
void prine_rev(NODE **ptr);
void delete_nth_node(NODE **hdr,const int n);
NODE * merge_list(NODE **f, NODE **s);
int count_node(NODE *hdr);
void GetOddNodes(NODE *hdr, NODE **odd, NODE **even);

int count_node(NODE *hdr)
{
    int i=0;
    NODE *temp;
    temp = hdr;
    while(temp)
    {
        temp = temp->next;
        i++;
    }
    return i;
}
void add_end(NODE **head,int n)
{
    NODE *temp,*temp1;
    temp = malloc(sizeof(NODE));
    temp->no = n;
    temp1 = *head;
    if(*head == NULL || temp1->no > temp->no) {
        temp->next = *head;
        *head = temp;
    }
    else {
        while(temp1){
            if(temp1->next == NULL || temp1->next->no > temp->no) {
                temp->next = temp1->next;
                temp1->next = temp;
                break;
            }
            else
                temp1=temp1->next;
        }
    }
}
void printf_node(NODE *ptr)
{
	while(ptr)
	{
		printf("%d ",ptr->no);
		ptr=ptr->next;
	}
	printf("\n");
}
void print_rev(NODE **ptr)
{
    NODE *temp,**p;
    int c=0,i;
    temp = *ptr;
    c= count_node(*ptr);
    p = malloc((sizeof(NODE *))*c);
    temp = *ptr;
    for(i=0;i<c;i++)
    {
        p[i] = temp;
        temp = temp->next;
    }
    p[0]->next =0;
    for(i=1;i<c;i++)
    {
       p[i]->next = p[i-1];
    }
    *ptr = p[i-1];
}
void delete_nth_node(NODE **hdr,const int n)
{
	int m=0,count =1;
	NODE *temp= *hdr, *temp1;
	while(temp) {
		m++;
		temp= temp->next;
	}
        if(m < n)
        {
            printf("n is greater than no of nodes\n");
            return;
        }
	temp = *hdr;
        temp1 = *hdr;
	if((m-n+1) == 1) {
            printf("Delete first node\n");
	    *hdr = temp->next;
	    free(temp);
	}
	else {
            while(temp) {
                if(count == (m-n+1)) {
                    temp1->next = temp->next;
                    free(temp);
                    return;
	        }
	        else {
	            count ++;
                    temp1= temp;
                    temp = temp->next;
	        }
           }
	}
}
void reverse_pair(NODE **hdr)
{
    NODE *temp1,*temp2,*temp,*new_node;
    temp1 = *hdr;
    temp2 = temp1->next;
    new_node = temp2;
    while(temp1 && temp1->next) {
        temp = temp2->next;
        if(temp == NULL) {
            temp1->next = NULL;
            temp2->next = temp1;
        }
        else {
            
            temp1->next = (temp2->next->next) ? (temp2->next->next) : (temp2->next);
            temp2->next = temp1;
            temp1 = temp;
            temp2 = temp1->next;
        }
    }
    *hdr = new_node;
}
void GetOddNodes(NODE *hdr, NODE **odd, NODE **even)
{
    NODE *temp;
    temp = hdr;
    while(temp)
    {
        if((temp->no) % 2==1)
            add_end(odd,temp->no);
        else
            add_end(even,temp->no);
        temp = temp->next;
    }
}
