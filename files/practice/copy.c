#include<stdio.h>
void main(int argc,char **argv)
{
	FILE *fp,*fq;
	char ch;
	int i;
	if(argc<2)
	{
		printf("Usage: ./a.out f1,f1...\n");
		return;
	}
	fp=fopen(argv[1],"r");
	if(fp==0)
	{
		printf("File is not present\n");
		return;
	}
	for(i=2;i<argc;i++)
	{
		//fp=fopen(argv[1],"r");                NOTE:-"if you use this dont forget to close fp after closing fq"
		fq=fopen(argv[i],"w");
		while((ch=fgetc(fp))!=EOF)
			fputc(ch,fq);
		fclose(fq);
		rewind(fp);
	}
	printf("Done\n");
} 
