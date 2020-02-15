//shorting of student data record
#include<stdio.h>
int my_strcmp(char *,char *);
struct st{
	int rollno;
	char name[20];
	float marks;
	}typedef ST;
void main()
{
	ST a[5],t;
	int i,op,j;
	for(i=0;i<5;i++)
	{
		printf("Enter the rollno, name and marks\n");
		scanf("%d %s %f",&a[i].rollno,a[i].name,&a[i].marks);
	}
	printf("----------------------------\n");
	printf("Entered data is\n");
	for(i=0;i<5;i++)
		printf("%d %s %f \n",a[i].rollno,a[i].name,a[i].marks);
	printf("----------------------------\n");
	printf("Short according to:\n");
	printf("1)rollno\n2)name\n3)marks\n");
	scanf("%d",&op);
	printf("----------------------------\n");
	switch(op)
	{
		case 1:
			for(i=0;i<5-1;i++)
			{
				for(j=i+1;j<5;j++)
				{
					if(a[i].rollno>a[j].rollno)
					{
						t=a[i];
						a[i]=a[j];
						a[j]=t;
					}
				}
			}
			break;
		case 2:
			for(i=0;i<5-1;i++)
			{
				for(j=i+1;j<5;j++)
				{
					if((my_strcmp(a[i].name,a[j].name))==1)
					{
						t=a[i];
						a[i]=a[j];
						a[j]=t;
					}
				}
			}
			break;
		case 3:
			for(i=0;i<5-1;i++)
			{
				for(j=i+1;j<5;j++)
				{
					if(a[i].marks>a[j].marks)
					{
						t=a[i];
						a[i]=a[j];
						a[j]=t;
					}
				}
			}
			break;
	}
	printf("Shorted data is:\n");
	for(i=0;i<5;i++)
		printf("%d %s %f \n",a[i].rollno,a[i].name,a[i].marks);
}
int my_strcmp(char *p,char *q)
{
	int i;
	for(i=0;p[i];i++)
	{
		if(p[i]!=q[i])
			break;
	}
	if(p[i]>q[i])
		return 1;
	else if (p[i]<q[i])
		return -1;
	else if(p[i]==q[i])
		return 0;
}

