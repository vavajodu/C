#include<stdio.h>
void main(int argc,char **argv)
{
	FILE *fp;
	char ch;
	int count=0;
	if(argc!=3)
	{
		printf("Usage:./a.out fname character\n");
		return;
	}
	fp=fopen(argv[1],"r");
	if(fp==0)
	{
		printf("File is not present\n");
		return;
	}
	while((ch=fgetc(fp))!=EOF)
		if(ch==argv[2][0])
			count++;
	printf("Character %c is %d times present\n",argv[2][0],count);
	fclose(fp);
}
