#include<stdio.h>
void main()
{
	int num,c=0;
	printf("enter the number\n");
	scanf("%d",&num);
	if(num<0)
		num=-num;
	do
	{
		c++;
		num=num/10;
	}
	while(num>0);
	printf("Number of digits is %d\n",c);
}
