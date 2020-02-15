#include<stdio.h>
main()
{
	int a,b;
	printf("enter the value of a and b \n");
	scanf("%d %d",&a,&b);
	a>b?printf("result=%d\n",a-b):printf("Result=%d\n",a+b);
}
