#include<stdio.h>
void selection(int a[],int );
void bubble(int a[],int );
void insertion(int a[],int );
void main()
{
	int arr[30],ele,i,op;
	printf("enter the number of elements\n");
	scanf("%d",&ele);
	printf("enter the array\n");
	for(i=0;i<ele;i++)
		scanf("%d",&arr[i]);
	printf("Enter option\n1)selection\n2)bubble\n3)insertion\n");
	scanf("%d",&op);
	switch(op)
	{
		case 1:
			selection(arr,ele);
			break;
		case 2:
			bubble(arr,ele);
			break;
		case 3:
			insertion(arr,ele);
			break;
	}
}
void selection(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("Shorted array is :\n");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
}
void bubble(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("Shorted array is :\n");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
}
void insertion(int a[],int n)
{
	int i,j,key;
	for(i=1;i<n;i++)
	{
		key=a[i];
		j=i-1;
		while(j>=0 && a[j]>key)
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=key;
	}
	printf("Shorted array is :\n");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
}
