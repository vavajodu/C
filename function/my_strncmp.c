#include<stdio.h>
int my_strncmp(const char *,const char *,int);
main()
{
char s1[10],s2[10];
int n,r;
printf("Enter first string\n");
scanf("%s",s1);
printf("Enter second string\n");
scanf("%s",s2);
printf("Enter a number\n");
scanf(" %d",&n);
r=my_strncmp(s1,s2,n);
if(r==0)
printf("Equal\n");
else
printf("Not equal\n");
}
int my_strncmp(const char *s,const char *p,int num)
{
int i;
for(i=0;num>0;i++)
{
	if(s[i]!=p[i])
	break;
	num--;
}
if(num<=0)
return 0;
else if(s[i]>p[i])
return 1;
else if(s[i]<p[i])
return -1;
}
