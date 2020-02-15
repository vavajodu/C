#include<stdio.h>
#include<string.h>
main(int argc,char **argv)
{
	FILE *fp,*fq;
	char ch;
	if(argc!=3)
	{
		printf("Usage:./a.out,fname ,destfile\n");
		return;
	}
	fp=fopen(argv[1],"r");
	fq=fopen(argv[2],"w");
	if(fp==0)
	{
		printf("File is not present...\n");
		return;
	}
	while((ch=fgetc(fp))!=EOF)
	{
		if(ch>='a'&ch<='z')
		{
			ch=ch-32;
		}
		fputc(ch,fq);
	}
}
