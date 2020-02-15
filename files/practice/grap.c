#include<stdio.h>
#include<malloc.h>
int strcmp(const char *p,const char *q);
void main(int argc,char **argv)
{
	char *p,ch,s[20];
	FILE *fp;
	int c=0;
	if(argc!=3)
	{
		printf("Usage:./a.out string fname\n");
		return;
	}
	fp=fopen(argv[2],"r");
	if(fp==0)
	{
		printf("file is not present\n");
		return;
	}
	while((ch=fgetc(fp))!=EOF)
		c++;
	rewind(fp);
	p=malloc(c*sizeof(char));
	while((c=fscanf(fp,"%s",s))!=EOF)
	{
		if(!(strcmp(argv[1],s)))
		{
			fgets(p,c,fp);
			printf("%s\n",p);
		}
	}
}
int strcmp(const char *p,const char *q)
{
	int i;
	for(i=0;p[i];i++)
	{
		if(p[i]!=q[i])
			break;
	}
	if(p[i]=='\0' && q[i]=='\0')
		return 0;
	else
		return 1;
}
