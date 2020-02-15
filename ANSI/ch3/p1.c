#include<stdio.h>
#define MAX 10
void short_array(int *);
int search_ele(int *,int );
int main()
{
	int i, v[MAX],find, index;
	printf("Enter the numbers\n");
	for(i=0;i<MAX;i++)
	{
		scanf("%d",&v[i]);
	}
	printf("Enter the number you want to search\n");
	scanf("%d",&find);
	short_array(v);
	for(i=0;i<MAX;i++)
	{
		printf("%d ",v[i]);
	}
	printf("\n");
	if(index=search_ele(v,find))
		printf("Number %d is present at %d location\n",find,index+1);
	else
		printf("Number is not present in array\n");
}
void short_array(int dummy[MAX])
{
	int i,j,temp;
	for(i=0;i<MAX-1;i++)
	{
		for(j=i+1;j<MAX;j++)
		{
			if(dummy[i]>dummy[j])
			{
				temp=dummy[i];
				dummy[i]=dummy[j];
				dummy[j]=temp;
			}
		}
	}
}
int search_ele(int array[MAX],int num)
{
	int min=0,max=MAX-1,mid;
	while(min<=max)
	{
		mid=(min+max)/2;
		if(num<array[mid])
			max=mid-1;
		else if(num>array[mid])
			min=mid+1;
		else 
			return mid;
	}
	return 0;
}
	















