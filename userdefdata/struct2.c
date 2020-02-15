//dynamically allocation
#include<stdio.h>
typedef struct st{
	int rollno;
	char ch;
	float marks;
	}ST;
void main()
{
	ST *p;
	p=malloc(sizeof(ST));
	printf("Enter the rollno,character and marks\n");
	scanf("%d %c %f",&p->rollno,&p->ch,&p->marks);
	printf("entered data :\n");
	printf("%d %c %f\n",p->rollno,p->ch,p->marks);
}
