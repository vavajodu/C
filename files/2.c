#include<stdio.h>
#include<string.h>
main(int argc,char **argv)
{
	int c=0;
	char ch;
	FILE *fp,*fq;
	if(argc!=3)
	{
		printf("Usage:./a.out,fname,destfile\n");
		return;
	}
	fp=fopen(argv[1],"r");
	if(fp==0)
	{
		printf("File is not present...\n");
		return;
	}
	while((ch=fgetc(fp))!=EOF)
	{
		c++;
	}
	char a[c];
	rewind(fp);
	fq=fopen(argv[2],"r+");
	while(fgets(a,c,fp))
	{
		fseek(fq,0,SEEK_END);
		fputs(a,fq);
	}
}
