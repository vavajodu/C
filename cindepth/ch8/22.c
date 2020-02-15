#include<stdio.h>
void func(int a[],int );
void main()
{
	int arr[30],ele,i;
	printf("enter the number of element\n");
	scanf("%d",&ele);
	printf("enter the array\n");
	for(i=0;i<ele;i++)
		scanf("%d",&arr[i]);
	func(arr,ele);
}
void func(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("Ascending order\n");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
	printf("Descending order\n");
	for(i=n-1;i>=0;i--)
		printf("%d ",a[i]);
	printf("\n");
}

	
