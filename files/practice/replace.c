#include<stdio.h>
void main(int argc,char **argv)
{
	FILE *fp;
	char ch;
	if(argc!=4)
	{
		printf("Usage:./aout fname ch repalcech\n");
		return;
	}
	fp=fopen(argv[1],"r+");
	if(fp==0)
	{
		printf("File is not present\n");
		return;
	}
	while((ch=fgetc(fp))!=EOF)
		if(ch==argv[2][0])
		{
			fseek(fp,-1,SEEK_CUR);
			fputc(argv[3][0],fp);
		}
	fclose(fp);
	printf("Done\n");
}
