#include<stdio.h>
int my_strstrcount(char *,char *);
main()
{
int r;
char m[20],s[20];
printf("Enter first string..\n");
scanf("%s",m);
printf("Enter the sub string..\n");
scanf("%s",s);
r=my_strstrcount(m,s);
if(r!=0)
printf("String %s is present %d times..\n",s,r);
else
printf("Not present..\n");
}
int my_strstrcount(char *m,char *s)
{
	int i,j,c=0;
	for(i=0;m[i];i++)
	{
		if(m[i]==s[0])
		{
			for(j=1;s[j];j++)
			{
				if(s[j]!=m[i+j])
					break;
			}
			if(s[j]=='\0')
				++c;
		}
	}
	if(c!=0)
		return c;
	else 
		return 0;
}
