#include<stdio.h>
#include<string.h>
main()
{
int i;
char ch[]="vector",s[10];
strcpy(s,ch);
printf("s=%s\n",s);
for(i=0;i<7;i++)
printf("%d ",s[i]);
}

