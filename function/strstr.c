#include<stdio.h>
#include<string.h>
main()
{
int r;
char m[10],s[10];
printf("Enter a string..\n");
scanf("%s",m);
printf("Enter a sub string..\n");
scanf("%s",s);
printf("Base address is %u..\n",m);
r=strstr(m,s);
if(r!=0)
printf("String %s is present at %u address..\n",s,r);
else
printf("Not present..\n");
}
