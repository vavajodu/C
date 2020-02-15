#include<stdio.h>
int dec(int ,int);
void main()
{
	int num,op,base;
	printf("Enter the option\n1)Binary\n2)octal\n");
	scanf("%d",&op);
	printf("Enter the number\n");
	scanf("%d",&num);
	if(op==1)
		base=2;
	else 
		base =8;
	printf("Decimal number is %d\n",dec(num,base));
}
int dec(int n,int b)
{
	int i,j,mul=1,sum=0;
	for(i=0;n>0;n=n/10,i++)
	{
		if(i==0)
			mul=1;
		else
		{
			mul=1;
			for(j=i;j>0;j--)
				mul=mul*b;
		}
			sum=sum+(n%10)*mul;
	}
	return sum;
}
