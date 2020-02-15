#include<stdio.h>
int my_search(const char *p,const char *q);
void main(int argc,char **argv)
{
	if(argc!=3)
	{
		printf("usage:./a.out fname string\n");
		return;
	}
	FILE *fp;
	char s[30];
	int c=0;
	fp=fopen(argv[1],"r");
	while((fscanf(fp,"%s",s))!=EOF)
	{
		if(my_search(s,argv[2]))
			c++;
	}
	printf("%s word is %d times present\n",argv[2],c);
	fclose(fp);
}
int my_search(const char *p,const char *q)
{
	int i;
	for(i=0;p[i];i++)
	{
		if(p[i]!=q[i])
			break;
	}
	if(p[i]=='\0' &&q[i]=='\0')
		return 1;
	else
		return 0;
}
