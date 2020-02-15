#include<stdio.h>
void main()
{
	int arr[10],i,odd=0,even=0;
	printf("enter the elements\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i]%2==0)
			even++;
		else 
			odd++;
	}
	printf("odd=%d and even=%d\n",odd,even);
}
