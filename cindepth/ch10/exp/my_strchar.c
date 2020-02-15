#include<stdio.h>
char *my_strchr(char *,int);
void main()
{
	char s[20],ch,*p;
	printf("Enter the string\n");
	scanf("%[^\n]",s);
	printf("Enter the character\n");
	scanf(" %c",&ch);
	p=my_strchr(s,ch);
	if(p==NULL)
		printf("No character found\n");
	printf("String is:\n");
	printf("%s\n",p);
}
char *my_strchr(char *str,int ch)
{
	int i;
	char *p;
	while(*str)
	{
		if(str[i]==(char)ch)
			return str;
		else
			str++;
	}
	return 0;
}
