//passing structure to function
#include<stdio.h>
#include<stdlib.h>
struct st{
	int rollno;
	char name[20];
	float marks;
}typedef ST;
void print(ST *);
void main()
{	
	ST a1;
	printf("Enter the rollno\n");
	scanf("%d",&a1.rollno);
	printf("Enter the name\n");
	scanf("%s",a1.name);
	printf("Enter the marks\n");
	scanf("%f",&a1.marks);
	print(&a1);
}
void print(ST *a)
{
	printf("==============\n");
	printf("%d\t%s\t%f\t\n",a->rollno,a->name,a->marks);
}
