#include<stdio.h>
char *my_strstr(const char *,const char *);
main()
{
	int r;
	char m[20],s[20];
	printf("Enter the main string..\n");
	scanf("%s",m);
	printf("Enter the sub string..\n");
	scanf("%s",s);
	printf("Base address is %u\n",m);
	r=my_strstr(m,s);
	if(r!=0)
		printf("string %s is present at %u address..\n",s,r);
	else
		printf("Not present..\n");
}
char *my_strstr(const char *m,const char *s)
{
	int i,j;
	for(i=0;m[i];i++)
	{
		if(s[0]==m[i])
		{
			for(j=1;s[j];j++)
			{
				if(s[j]!=m[i+j])
					break;
			}
			if(s[j]=='\0')
			return m+i;
		}
	
	}
	return 0;
	
}

