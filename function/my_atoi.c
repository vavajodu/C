#include<stdio.h>
int my_atoi(char *);
main()
{
char s[10];
int n;
printf("Enter the string..\n");
scanf("%s",s);
n=my_atoi(s);
printf("Equivalent integer is %d\n",n);
}
int my_atoi(char *s)
{
int num=0,i;
for(i=0;s[i];i++)
{
	if(s[i]>='0'&&s[i]<='9')
	{
		num=num*10+(s[i]-48);
	}
}
return num;
}
