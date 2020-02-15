#include<stdio.h>
void main()
{
	FILE *fp;
	char s[30];
	fp=fopen("data","r+");
	printf("Enter the data\n");
	scanf("%s",s);
	fprintf(fp,"%s",s);
	printf("Done\n");
}
