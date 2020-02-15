#include<stdio.h>
char *my_strchr(char*,char);
main()
{
int r;
char s[10],ch;
printf("Enter the string\n");
scanf("%s",s);
printf("Enter the character..\n");
scanf(" %c",&ch);
printf("base address is %u\n",s);
r=my_strchr(s,ch);
if(r==0)
printf("Not available\n");
else
printf("character %c is available at %u address\n",ch,r);
}
char *my_strchr(char *s1,char c)
{
int i,q=0;
for(i=0;s1[i];i++)
{
	if(s1[i]==c)
	q=s1+i;
	
}
return q;	
//if(s1[i]=='\0')
//return 0;
}	
