#include"header.h"
void add_begin(ST **ptr)
{
	ST *temp;
	temp=(ST *)malloc(sizeof(ST));
	printf("Enter the rollno,name and marks\n");
	scanf("%d %s %f",&temp->rollno,temp->name,&temp->marks);
	temp->next=*ptr;
	*ptr=temp;
}
void add_end(ST **ptr)
{
	ST *temp,*temp1;
	temp=malloc(sizeof(ST));
	printf("Enter the rollno,name and marks\n");
	scanf("%d %s %f",&temp->rollno,temp->name,&temp->marks);
	if(*ptr==0)
	{
		temp->next=*ptr;
		*ptr=temp;
	}
	else
	{
		temp1=*ptr;
		while(temp1->next)
		{
			temp1=temp1->next;
		}
		temp->next=0;
		temp1->next=temp;
	}
}
void add_middle(ST **ptr)
{
	ST *temp,*temp1;
	temp=(ST *)malloc(sizeof(ST));
	printf("Enter the rollno ,name and marks\n");
	scanf("%d %s %f",&temp->rollno,temp->name,&temp->marks);
	if(*ptr==0 || temp->rollno<(*ptr)->rollno)
	{
		temp->next=*ptr;
		*ptr=temp;
	}
	else
	{
		temp1=*ptr;
		while(temp1)
		{
			if(temp1->next==0 || temp->rollno < temp1->next->rollno)
			{
				temp->next=temp1->next;
				temp1->next=temp;
				break;
			}
			temp1=temp1->next;
		}
	}
}
