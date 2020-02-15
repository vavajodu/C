#include<stdio.h>
void main()
{
	int arr[20],n,i,j,temp;
	printf("enter the number of elements\n");
	scanf("%d",&n);
	printf("Enter the array:\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(i=1;i<n;i++)
	{
		temp=arr[i];
		for(j=i-1;j>=0 && temp<arr[j];j--)
			arr[j+1]=arr[j];
		arr[j+1]=temp;
	}
	printf("Shorted array is :\n");
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");
}
