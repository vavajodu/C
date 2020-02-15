#include<stdio.h>
void my_strncat(char *,const char*,int);
void main()
{
	char s1[20],s2[20];
	int n;
	printf("Enter the first string\n");
	scanf(" %[^\n]",s1);
	printf("Enter the second string\n");
	scanf(" %[^\n]",s2);
	printf("Enter the number of characters you want to concatinate\n");
	scanf("%d",&n);
	my_strncat(s1,s2,n);
	printf("After concatination\n");
	printf("%s\n",s1);
}
void my_strncat(char *d,const char *s,int n)
{
	int j,i;
	for(i=0;d[i];i++);
	for(j=0;j<n;j++,i++)
		d[i]=s[j];
	d[i]='\0';
}
