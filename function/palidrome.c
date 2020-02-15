#include<stdio.h>
main()
{
int i,j;
char s[10];
printf("Enter the string..\n");
gets(s);
for(i=0;s[i];i++);
j=i;
for(i=0,j=j-1;i<=j;i++,j--)
{
	if(s[i]!=s[j])
	break;
}
if(i>j)
printf("its a palidrome\n");
else
printf("its not a palidrome\n");
}
