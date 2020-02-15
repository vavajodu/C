#include<stdio.h>
int my_strcmp(const char*,const char*);
main()
{
int c;
char s1[10],s2[10];
printf("Enter first string\n");
scanf("%s",s1);
printf("Enter the second string\n");
scanf("%s",s2);
c=my_strcmp(s1,s2);
if(c==1)
printf("Equal\n");
else
printf("not equal\n");
}
int my_strcmp(const char *s,const char *p)
{
int i;
for(i=0;s[i];i++)
	if(s[i]!=p[i])
	break;
if(s[i]==p[i])
return 1;
else
return 0;
}
