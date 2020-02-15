#include<stdio.h>
char *my_strstr(const char *,const char*);
void main()
{
	char s1[20],s2[20];
	char *p;
	printf("Enter the first string\n");
	scanf(" %[^\n]",s1);
	printf("Enter the second string\n");
	scanf(" %[^\n]",s2);
	p=my_strstr(s1,s2);
	printf("String is:\n");
	printf("%s\n",p);
}
char *my_strstr(const char *p,const char *q)
{
	int i,j;
	for(i=0;p[i];i++)
	{
		if(p[i]==q[0])
		{
			for(j=1;q[j];j++)
			{
				if(p[i+j]!=q[j])
					break;
			}
			if(q[j]=='\0')
				return (p+i);
		}
		
	}
	return 0;
	
}

