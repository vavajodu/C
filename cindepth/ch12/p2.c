#include<stdio.h>
struct st{
	int rollno;
	char name[20];
	float marks;
	}typedef ST;
void my_sort(ST *);
void main()
{
	ST *p;
	FILE *fp,*fd;
	int i=0;
	p=malloc(5*sizeof(ST));
	fp=fopen("data","r");
	fd=fopen("sort","w");
	while((fscanf(fp,"%d %s %f\n",&p[i].rollno,p[i].name,&p[i].marks)!=EOF))
		i++;
	my_sort(p);
	for(i=0;i<5;i++)
	{
		fprintf(fd,"%d %s %f\n",p[i].rollno,p[i].name,p[i].marks);
	}
	fclose(fp);
	fclose(fd);
	printf("Done\n");
}
void my_sort(ST *a)
{
	int i,j;
	ST temp;
	for(i=0;i<4;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i].rollno>a[j].rollno)
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}
		
		
	
