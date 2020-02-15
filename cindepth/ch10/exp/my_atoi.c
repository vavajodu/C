#include<stdio.h>
int my_atoi(char *);
void main()
{

	int i;	char ch[20];
	printf("Enter the string\n");
	scanf("%[^\n]",ch);
	i=my_atoi(ch);
	printf("THe converted number is\n");
	printf("%d\n",i);
}
int my_atoi(char *p)
{
	int n=0;
	while(*p)
	{
		n=n*10+(*p-48);
		*p++;
	}
	return n;
}
