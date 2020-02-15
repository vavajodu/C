//structure using double pointer
#include<stdio.h>
struct st{
	int rollno;
	char name[20];
	float marks;
	}typedef ST;
void main()
{
	ST **s1;
	s1=malloc(sizeof(ST *)*5);
	for(i=0;i<5;i++)
		s1[i]=malloc(sizeof(ST));
	printf("Enter the rollno,name and marks\n");
	for(i=0;i<5;i++)
		scanf("%d %s %f",&s1[i].rollno,s1[i].name,&s1[i].marks);
	printf("--------------------\n");
	printf("Entered data:\n");
	for(i=0;i<5;i++)
		printf("%d %s %f\n",s1[i].rollno,s1[i].name,s1[i].marks);
}
