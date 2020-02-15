//structure copy
#include<stdio.h>
typedef struct st
{	
	int rollno;
	char name[12];
	float marks;
}ST;
void main()
{
	ST s1,s2;
	printf("Enter the roll no\n");
	scanf("%d",&s1.rollno);
	printf("enter the name\n");
	scanf("%s",s1.name);
	printf("enter the marks\n");
	scanf("%f",&s1.marks);
	s2=s1;
	printf("copied data is:\n");
	printf("%d %s %f\n",s2.rollno,s2.name,s2.marks);
}
	
