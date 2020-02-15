#include<stdio.h>
void main()
{
	int num,f0,f1,f2;
	printf("Enter the number\n");
	scanf("%d",&num);
	if(num==0||num==1)
		printf("Number is fibonecci\n");
	else
	{
		f0=0;f1=1;
		f2=f0+f1;
		while(f2<num)
		{
			if(f2==num)
				printf("Number is fibonecci\n");
			f0=f1;
			f1=f2;
			f2=f0+f1;
		}
	}
	if(f2==num)
		printf("Entered number is fibonecci number\n");
	else
		printf("Entered number is not fibonecci number\n");
}
