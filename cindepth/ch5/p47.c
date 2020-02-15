#include<stdio.h>
void main()
{
	int big,n,i;
	printf("Enter 10 numbers\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&n);
		if(i==0)
			big=n;
		else
			if(big<n)
				big=n;
	}
	printf("Largest number is %d\n",big);
}
