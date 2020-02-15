#include<stdio.h>
void my_strcat(char *,const char *);
main()
{
char s1[10],s2[10];
printf("Enter first string...\n");
scanf("%s",s1);
printf("Enter second string\n");
scanf("%s",s2);
my_strcat(s1,s2);
printf("new string is %s",s1);
printf("\n");
}
void my_strcat(char *s,const char *d)
{
int i,j;
for(i=0;s[i];i++);
for(j=0;d[j];j++)
{
s[i]=d[j];
i++;
}
s[i]='\0';
}
