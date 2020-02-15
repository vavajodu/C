#include<stdio.h>
#include<string.h>
main()
{
int p;
char s1[10],ch;
printf("enter a string\n");
scanf("%s",s1);
printf("Enter a character you want to find\n");
scanf(" %c",&ch);
printf("Base address is %u\n",s1);
p=strchr(s1,ch);
if(p==0)
printf("Not available\n");
else
printf("character %c is available at %u address\n",ch,p);
}
