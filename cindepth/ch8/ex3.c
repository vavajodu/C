#include<stdio.h>
void main()
{
	int arr[10],i,big,small;
	printf("Enter the array elements\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
		if(i==0)
		{
			big=arr[i];
			small=arr[i];
		}
		else
		{
			if(arr[i]>big)
				big=arr[i];
			else if(arr[i]<small) 
				small=arr[i];
		}
	}
	printf("Biggest number is %d and smallest number is %d\n",big,small);
}
