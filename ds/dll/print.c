#include"header.h"
void print_node(void)
{
	ST *temp;
	temp=headptr;
	while(temp)
	{
		printf("%d\t",temp->n);
		temp=temp->next;
	}
	printf("\n");
}
int count_node(void)
{
	int c=0;
	ST *temp1;
	temp1=headptr;
	while(temp1)
	{
		c++;
		temp1=temp1->next;
	}
	return c;
}
