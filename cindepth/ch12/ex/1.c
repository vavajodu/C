#include<stdio.h>
void main()
{
	FILE *fp;
	char s[50];
	fp=fopen("data","r");
	while(fgets(s,50,fp))
		printf("%s",s);
}
