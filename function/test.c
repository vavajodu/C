#include<stdio.h>
char *my_strstr(const char *,const char *);
main()
{
int r=0;
char s[20],p[10];
printf("Enter a string..\n");
scanf("%s",s);
printf("Enter the string you want to search..\n");
scanf("%s",p);
printf("base address is %u\n");
r=my_strstr(s,p);
if(r==0)
printf("string is not available\n");
else
printf("string is available at %u\n",r);
}

char *my_strstr(const char *s,const char *p)
{
int i,j;
for(i=0;s[i];i++)
{
	if(p[0]==s[i])
	{
		for(j=1;p[j];j++)
		{
			if(p[j]!=s[i+j])
			break;
		}
	if(p[j]=='\0')
	return (s+i);
	}

}
return 0;
}
