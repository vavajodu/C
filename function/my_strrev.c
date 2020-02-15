#include<stdio.h>
char *my_strrev(char *);
main()
{
	char s[100],*p;
	printf("Enter the string..\n");
	scanf("%[^\n]",s);
	p=my_strrev(s);
	printf("Reverse of string is %s\n",p);
}
char *my_strrev(char *p)
{
	int i,c,j;
	char temp;
	for(i=0;p[i];i++);
	//c=i;
	for(j=0,i=i-1;i>=j;i--,j++)
	{
		temp=p[i];
		p[i]=p[j];
		p[j]=temp;
	}
	return p;
}
