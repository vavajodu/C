#include<stdio.h>
void main()
{
	int i;
	char a[20];
	char *p=a;
	printf("Enter the string\n");
	scanf("%[^\n]",a);
	for(i=0;p[i];i++)
		printf("%c ",p[i]);
	printf("\n");
	printf("Array address is \n");
	for(i=0;*p;i++)
		printf("%p ",p++);
	printf("\n");
}
	
