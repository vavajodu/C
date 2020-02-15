#include<stdio.h>
int my_strncmp(const char*,const char *,int);
void main()
{
	char s1[20],s2[20];
	int n;
	printf("Enter the first string\n");
	scanf(" %[^\n]",s1);
	printf("Enter the second string\n");
	scanf(" %[^\n]",s2);
	printf("Enter the number of characters\n");
	scanf("%d",&n);
	if(my_strncmp(s1,s2,n))
		printf("Same\n");
	else
		printf("Different\n");
}
int my_strncmp(const char *p,const char *q,int n)
{
	int j;
	for(j=0;j<n;j++)
	{
		if(p[j]!=q[j])
			return 0;
		
	}
	return 1;
}
