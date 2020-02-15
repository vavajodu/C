#include<stdio.h>
void main(int argc,char **argv)
{
	if(argc!=4)
	{
		printf("Usage:./a.out fname char nwcahr\n");
		return;
	}
	FILE *fp;
	char ch;
	fp=fopen(argv[1],"r+");
	while((ch=fgetc(fp))!=EOF)
	{
		if(ch==argv[2][0])
		{
			fseek(fp,-1,SEEK_CUR);
			fputc(argv[3][0],fp);
		}
	}
	printf("done\n");
	fclose(fp);
}
