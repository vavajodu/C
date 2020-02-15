//neasted structure
#include<stdio.h>
struct date{
	int date;
	int month;
	int year;
};
struct st{
	char name[20];
	struct date dob;
	struct date doj;
	}typedef a;
void main()
{
	a s1;
	printf("Enter the name \n");
	scanf("%s",s1.name);
	printf("Enter the date of birth\n");
	scanf("%d/%d/%d",&s1.dob.date,&s1.dob.month,&s1.dob.year);
	printf("Enter the date of join\n");
	scanf("%d/%d/%d",&s1.doj.date,&s1.doj.month,&s1.doj.year);
	printf("entered data is:\n");
	printf("Name:%s\n",s1.name);
	printf("Dob:%d/%d/%d\n",s1.dob.date,s1.dob.month,s1.dob.year);
	printf("Doj:%d/%d/%d\n",s1.doj.date,s1.doj.month,s1.doj.year);
}
	
	
