#include<stdio.h>
int strcmp(const char *,const char *);
main()
{
int r;
char s1[10],s2[10];
printf("Enter first string..\n");
scanf("%s",s1);
printf("Enter second string..\n");
scanf("%s",s2);
r=strcmp(s1,s2);
printf("r=%d\n",r);

}
int strcmp(const char *s,const char *p)
{
int i;
for(i=0;s[i];i++)
{
	if(s[i]!=p[i])
	break;
}
if(s[i]==p[i])
return 0;
else if(s[i]>p[i])
return 1;
else if(s[i]<p[i])
return -1;
}








