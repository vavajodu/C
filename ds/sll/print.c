#include"header.h"
void print_data(ST *ptr)
{
	
	while(ptr)
	{
		printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->marks);
		ptr=ptr->next;
	}
}
void print_data_rec(ST *ptr)
{
	if(ptr)
	{
		printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->marks);
		print_data_rec(ptr->next);
	}
	else
		return;
}
void print_data_reverse(ST *ptr)
{
	if(ptr)
	{
		print_data_reverse(ptr->next);
		printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->marks);
	}
	else
		return;
}
void reverse_link(ST **ptr)
{
	int c,i=0;
	ST **p,*temp;
	c=count_nodes(*ptr);
	p=malloc(sizeof(ST *) * c);
	temp=*ptr;
	while(temp)
	{
		p[i++]=temp;
		temp=temp->next;
	}
	p[0]->next=0;
	for(i=1;i<c;i++)
	{
		p[i]->next=p[i-1];
	}
	*ptr=p[i-1];
}
