#include<stdio.h>
void my_strncpy(char *,const char *,int );
void main()
{
	char s1[20],s2[20];
	int n;
	printf("Enter a string\n");
	scanf("%[^\n]",s1);
	printf("Enter the number of characters you want to copy\n");
	scanf("%d",&n);
	my_strncpy(s2,s1,n);
	printf("Copied string is :\n");
	printf("%s\n",s2);
}
void my_strncpy(char *dest,const char *src,int i)
{
	int j;
	for(j=0;src[j];j++)
	{
		if(j<i)
			dest[j]=src[j];
		else
		{
			dest[j]='\0';
			break;
		}
	}
	for(;j<i;j++)
		dest[j]='\0';
}
