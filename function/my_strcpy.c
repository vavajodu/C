#include<stdio.h>
void my_strcpy (char *,const char *);
main()
{
char s[10],p[10];
printf("Enter a string\n");
scanf("%s",s);
my_strcpy(p,s);
printf("p=%s",p);
printf("\n");
}
void my_strcpy(char *s2,const char *s1)
{
int i;
for(i=0;s1[i];i++)
s2[i]=s1[i];
s2[i]='\0';
}
