#include<stdio.h>
void main()
{
	int a[30],b[30],c[30],i=0,j=0,k=0,l1,l2;
	printf("enter the number of elements in array1 and array2\n");
	scanf("%d %d",&l1,&l2);
	printf("enter the array1 in sorted order\n");
	for(i=0;i<l1;i++)
		scanf("%d",&a[l1]);
	
	printf("enter the array2 in sorted order\n");
	for(i=0;i<l2;i++)
		scanf("%d",&b[l2]);
	while(j<=l1-1 && k<=l2-1)
	{
		if(a[j]<b[k])
			c[i++]=a[j++];
		else
			c[i++]=b[k++];
	}
	while(j<=l1-1)
		c[i++]=a[j++];
	while(k<=l2-1)
		c[i++]=b[k++];
	printf("New array is :\n");
	for(i=0;i<l1+l2;i++)
		printf("%d ",c[i]);
	printf("\n");
}
	
