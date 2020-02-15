#include<stdio.h>
#include<string.h>
void main(int argc,char **argv)
{
	if(argc!=2)
	{
		printf("Usage:./a.out fname\n");
		return;
	}
	FILE *fp;	
	char s[20];
	fp=fopen(argv[1],"r+");
	while((fscanf(fp,"%s",s))!=EOF)
	{
		if(s[0]>='a' &&s[0]<='z')
			s[0]=s[0]-32;
		fseek(fp,-strlen(s),SEEK_CUR);
			fprintf(fp,"%s",s);
	}
	printf("Done\n");
	fclose(fp);
}
	
