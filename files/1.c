#include<stdio.h>
#include<string.h>
main(int argc,char **argv)
{
	int c=0,i;
	char ch;
	FILE *fp,*fq;
	fp=fopen(argv[1],"r");
	if(argc<=2)
	{
		printf("Usage: ./a.out sourcefile destfile,destfile1,...\n");
		return;
	}
	if (fp==0)
	{
		printf("File is not present...\n");
		return;
	}
	while((ch=fgetc(fp))!=EOF)
	{
		++c;
	}
	char a[c];
	for(i=2;i<argc;i++)
	{
		rewind(fp);
		fq=fopen(argv[i],"w");
		while((fgets(a,c,fp)))
		{
			fputs(a,fq);
		}
	}
}
