#include<stdio.h>
main()
{
int m;
printf("Enter your marks...\n");
scanf("%d",&m);
if(m>=39)
{
	if(m>=40&&m<=59)
	printf("D grade\n");
	else
	{
		if(m>=60&&m<=74)
		printf("C grade\n");
		else
		{
			if(m>=75&&m<=85)
			printf("B grade\n");
			else
			printf("A grade\n");
		}
	}
}
else
printf("Sorry, you are fail...\n");
}
