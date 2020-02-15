#include<stdio.h>
void main(int argc,char **argv)
{
	if(argc!=3)
	{
		printf("./a.out sfile dfile\n");
		return;
	}
	FILE *fp,*fd;	
	char ch;
	fp=fopen(argv[1],"r");
	fd=fopen(argv[2],"w");
	while((ch=fgetc(fp))!=EOF)
	{
		fputc(ch,fd);
	}
	printf("Done\n");
	fclose(fp);
	fclose(fd);
}
	
