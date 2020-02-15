#include<stdio.h>
main()
{
int m;
char ch;
printf("Enter the total marks...\n");
scanf("%d",&m);
if(m>=85)
ch='A';
else
{
	if(m<85&&m>=75)
	ch='B';
	else
	{
		if(m<75&&m>=65)
		ch='C';
		else
		{
			if(m<65&&m>=55)
			ch='D';
			else
			printf("you are fail\n");
		}
	}	
}
printf("your grade is %c\n",ch);
}
