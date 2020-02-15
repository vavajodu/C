#include"header.h"
void add_begin(void)
{
	ST *temp;
	temp=malloc(sizeof(ST));
	printf("Enter the data\n");
	scanf("%d",&temp->n);
	temp->prev=0;
	temp->next=0;
	if(headptr==0)
	{
		headptr=temp;
	}
	else
	{
		headptr->prev=temp;
		temp->next=headptr;
		headptr=temp;
	}
}
void add_end(void)
{
	ST *temp,*temp1;
	temp=malloc(sizeof(ST));
	printf("Enter the data\n");
	scanf("%d",&temp->n);
	temp->prev=0;
	temp->next=0;
	if(headptr==0)
	{
		headptr=temp;
	}
	else
	{
		temp1=headptr;
		while(temp1->next)
			temp1=temp1->next;
		temp1->next=temp;
		temp->prev=temp1;
	}
}
void add_middle(void)
{
	ST *temp,*temp1;
	temp=malloc(sizeof(ST));
	printf("Enter the data\n");
	scanf("%d",&temp->n);
	temp->next=0;
	temp->prev=0;
	if(headptr==0||temp->n < headptr->n)
	{
		temp->next=headptr;
		//headptr->prev=temp;
		headptr=temp;
	}
	else
	{
		temp1=headptr;
		while(temp1)
		{
			if(temp1->next==0 || temp1->next->n > temp->n)
			{
				temp->prev=temp1;
				temp->next=temp1->next;
				temp1->next=temp;
				break;
			}
			temp1=temp1->next;
		}
	}
}
