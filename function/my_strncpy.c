#include<stdio.h>
void my_strncpy(const char *,char *,int);
main()
{
	char s[10],p[10];
	int n,i;
	printf("Enter the string...\n");
	scanf("%s",s);
	printf("Enter the number...\n");
	scanf("%d",&n);
	my_strncpy(s,p,n);
	printf("p=%s\n",p);
	for(i=0;p[i];i++)
		printf("%d ",p[i]);
	printf("\n");
}

void my_strncpy(const char *s1,char *s2,int num)

{
	int j;
	for(j=0;j<num&&s1[j]!='\0';j++)
		s2[j]=s1[j];
	s2[j]='\0';
	for(;j<num;j++)
		s2[j]='\0';
	
}
