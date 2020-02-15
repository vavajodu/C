#include<stdio.h>
void main()
{
	FILE *fp;
	char s[50];
	fp=fopen("text","w");
	printf("Enter the data\n");
	scanf("%[^\n]",s);
	fprintf(fp,"%s",s);
	fclose(fp);
}
	
