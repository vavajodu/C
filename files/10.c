#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(int argc,char **argv)
{
	if(argc!=2)
	{
		printf("Usage:./a.out fname\n");
		return;
	}
	FILE *fp;
	char ch,a[20],*temp;
	int l=0,c=0,i,j;
	char **p;
	fp=fopen(argv[1],"r");
	if(fp==0)
	{
		perror("fopen");
		return;
	}
	while((ch=fgetc(fp))!=EOF)
		c++;
	rewind(fp);
	while((fscanf(fp,"%s",a))!=EOF)
		l++;
	p=malloc(sizeof(char *)*l);
	for(i=0;i<l;i++)
		p[i]=malloc(sizeof(char)*c);
///////////////////////////////////////////////////////////////////////	
	rewind(fp);
	for(i=0;i<l;i++)
		fgets(p[i],c,fp);
	for(i=0;i<l;i++)
	{
		for(j=i+1;j<l;j++)
		{
			if(strcmp(p[i],p[j])>0)
			{
				temp=p[i];
				p[i]=p[j];
				p[j]=temp;
			}
		}
	}
	for(i=0;i<l;i++)
		printf("%s\n",p[i]);
	
}
