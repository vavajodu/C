#include<stdio.h>
float func(float ,int );
void main()
{
 	float base,res;
	int exp;
	printf("Enter the flaot number and exponent\n");
	scanf("%f %d",&base,&exp);
	res=func(base,exp);
	printf("Result of %.2f^%d is :\n",base,exp);
	printf("%f",res);
}
float func(float a,int n)
{
	double d=1;
	int i;
	if(n==0)
		return 1;
	else
	{
		for(i=1;i<=n;i++)
		{
			d=d*a;
		}
	}
	if(n<0)
		return 1/d;
	else 
		return d;
}
