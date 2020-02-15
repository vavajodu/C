#include<stdio.h>
main()
int *ptr;
int a[5];
{
	int n;
	printf("Enter the number you want to push into the stack...\n");
	scanf("%d",&n);
	push(n);
}
void push(int i)
{
	if(ptr!=&a[4])
	{
		*ptr=i;
			
