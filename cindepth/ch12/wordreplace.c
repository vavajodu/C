#include<stdio.h>
#include<string.h>
void main(int argc,char **argv)
{
	if(argc!=4)
	{
		printf("usage:./a.out fname word rword\n");
		return;
	}
	FILE *fp;
	char s[20];
	fp=fopen(argv[1],"r+");
	while((fscanf(fp,"%s",s))!=EOF)
	{
		if(!(strcmp(argv[2],s)))
		{
			fseek(fp,-strlen(s),SEEK_CUR);
			fprintf(fp,"%s",argv[3]);
		}
	}
	printf("Done\n");
	fclose(fp);
}
