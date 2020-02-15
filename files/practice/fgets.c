#include<stdio.h>
#include<stdlib.h>
void main(int argc,char **argv)
{
	FILE *fp;
	char *p,ch;
	int c=0;
	if(argc!=2)
	{
		printf("Usage:./a.out fname\n");
		return;
	}
	fp=fopen(argv[1],"r");
	if(fp==0)
	{
		printf("File is not present\n");
		return;
	}
	while((ch=fgetc(fp))!=EOF)
		c++;
	p=malloc(c*sizeof(char));
	rewind(fp);
	p=fgets(p,c,fp);
	printf("string is \n");
	printf("%s\n",p);
}
