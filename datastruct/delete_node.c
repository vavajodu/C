#include<stdio.h>
#include<stdlib.h>
struct st
{
	int rollno;
	char name[10];
	float marks;
	struct st *next;
	struct st *prev;
}typedef ST;
void add_data(void);
void print(void);
void delete_node(int);
ST *headptr=0;
main()
{
	int n;
	char ch;
	do
	{
		add_data();
		printf("Do you want to enter another node...?(y/n)\n");
		scanf(" %c",&ch);
	}
	while(ch=='y');
	print();
	printf("Enter the roll no which you wants to delete...\n");
	scanf(" %d",&n);
	delete_node(n);
	printf("After deleting node..\n");
	print();
}
void add_data(void)
{
	ST *temp,*temp1;
	temp=malloc(sizeof(ST));
	printf("Enter the rollno...\n");
	scanf("%d",&temp->rollno);	
	printf("Enter the name...\n");
	scanf("%s",temp->name);	
	printf("Enter the marks...\n");
	scanf("%f",&temp->marks);
	temp->next=0;
	temp->prev=0;
	if(headptr==0||(temp->rollno)<(headptr->rollno))
	{
		if(headptr!=0)
		{
			temp->next=headptr;
			headptr->prev=temp;
		}
		headptr=temp;
	}
	else 
	{
		temp1=headptr;
		while(temp1)
		{
			if(temp1->next==0||(temp1->next->rollno)>(temp->rollno))
			{
				if((temp1->next)!=0)
				{
					temp1->next->prev=temp;
					temp->next=temp1->next;
				}
				temp1->next=temp;
				temp->prev=temp1;
				break;
			}
			temp1=temp1->next;
		}
	}

}
void print(void)
{
	ST *temp;
	temp=headptr;
	while(temp)
	{
		printf("%d %s %f\n",temp->rollno,temp->name,temp->marks);
		temp=temp->next;
	}
}		
void delete_node(int num)
{
	ST *temp;
	temp=headptr;
	while(temp)
	{
		if(temp->rollno==num)
		{
			if(temp==headptr)
			{
				headptr=temp->next;
				temp->next=0;
				free(temp);
				return;
			}
			else if(temp->next==0)
			{
				temp->prev->next=0;
				free(temp);
				return;
			}
			else
			{
				temp->prev->next=temp->next;
				temp->next->prev=temp->prev;
				free(temp);
				return;
			}
		}
		temp=temp->next;
	}
	printf("Node is not present..\n");	
}			
