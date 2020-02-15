#include<stdio.h>
struct st{
	int rollno;
	char name[20];
	float marks;
	}typedef ST;
void main()
{
	ST *p;
	FILE *fp;
	int n,i;
	fp=fopen("data","w");
	printf("Enter the number of records\n");
	scanf("%d",&n);
	p=calloc(n,sizeof(ST));
	for(i=0;i<n;i++)
	{
		printf("Enter the rollno, name and marks\n");
		scanf("%d %s %f",&p[i].rollno,p[i].name,&p[i].marks);
		fprintf(fp,"%d %s %f\n",p[i].rollno,p[i].name,p[i].marks);
	}
}
		
	
