#include<stdio.h>
#include<string.h>
main(int argc,char **argv)
{
	int c=0,l1,l2,i,m=0,k=0;
	char ch[20];
	FILE *fp,*fq,*fr;
	fp=fopen(argv[1],"r");
	while((fscanf(fp,"%s",ch))!=EOF)
	{
		c++;
	}
	l1=c;
	c=0;
	fq=fopen(argv[2],"r");
	while((fscanf(fq,"%s",ch))!=EOF)
	{
		c++;
	}
	l2=c;
	rewind(fp);
	rewind(fq);
	fr=fopen(argv[3],"w");
	for(i=0;i<l1+l2;)
	{
		if(k!=l1)
		{
			fscanf(fp,"%s",ch);
			//fprintf(fr,"%s",ch);
			fputs(ch,fr);
			fputc(32,fr);
			k++;
			i++;
		}
		if(m!=l2)
		{
			fscanf(fq,"%s",ch);
			fputs(ch,fr);
			fputc(32,fr);
			//fprintf(fr,"%s",ch);
			m++;
			i++;
		}
	}
}
