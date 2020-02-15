#include<stdio.h>
#include<string.h>

#include<malloc.h>
struct st{
		int rollno;
		char name[20];
		float marks;
	}typedef ST;

void sort(ST *,int);
void main()
{
	ST s1[5];
	int i,op;
	for(i=0;i<5;i++)
	{
		printf("Enter the %d student data\n",i+1);
		scanf("%d %s %f",&s1[i].rollno,s1[i].name,&s1[i].marks);
	}
	printf("entered data is :\n");
	for(i=0;i<5;i++)
		printf("%d %s %f\n",s1[i].rollno,s1[i].name,s1[i].marks);
	printf("Enter the option\n1)rollno\n2)name\n3)marks\n");
	scanf("%d",&op);
	sort(s1,op);
	printf("================\n");
	printf("After sorting\n");
	for(i=0;i<5;i++)
		printf("%d %s %f\n",s1[i].rollno,s1[i].name,s1[i].marks);
}
void sort(ST *p,int n)
{
	int i,j;
	ST temp;
	if(n==1)
	{
		for(i=0;i<4;i++)
		{
			for(j=i+1;j<5;j++)
			{
				if((p[i].rollno) > (p[j].rollno))
				{
					temp=p[i];
					p[i]=p[j];
					p[j]=temp;
				}
			}
		}
	}
	else if(n==2)
	{
		for(i=0;i<4;i++)
		{
			for(j=i+1;j<5;j++)
			{
				if(strcmp(p[i].name,p[j].name)==1)
				{
					temp=p[i];
					p[i]=p[j];
					p[j]=temp;
				}
			}
		}
	}
	else
	{
		for(i=0;i<4;i++)
		{
			for(j=i+1;j<5;j++)
			{
				if((p[i].marks) > (p[j].marks))
				{
					temp=p[i];
					p[i]=p[j];
					p[j]=temp;
				}
			}
		}
	}
}
