#include<stdio.h>
void main()
{
	int i;
	char a[20];
	printf("Enter the string\n");
	scanf("%s",a);
	for(i=0;a[i];i++)
		printf("%c ",a[i]);
	printf("\n");
	printf("Array address is \n");
	for(i=0;a[i];i++)
		printf("%p ",&a[i]);
	printf("\n");
}
	
