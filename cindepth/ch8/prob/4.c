#include<stdio.h>
void main()
{
	int arr[10],i,small,temp;
	printf("Enter the array\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
		if(i==0)
			small=i;
		else
			if(arr[i]<arr[small])
				small=i;
	}
	temp=arr[small];
	arr[small]=arr[0];
	arr[0]=temp;
	for(i=0;i<10;i++)
		printf("%d ",arr[i]);
}
