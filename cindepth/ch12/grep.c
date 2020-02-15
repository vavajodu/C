#include<stdio.h>
int my_search(const char *,const char *);
int my_strlen(const char*);
void main(int argc,char **argv)
{
	if(argc!=3)
	{
		printf("usage:./a.out fname string\n");
		return;
	}
	FILE *fp;
	char s[50];
	fp=fopen(argv[1],"r");
	while((fgets(s,sizeof(s),fp))!=NULL)
		if(my_search(s,argv[2]))
		{
			printf("%s",s);
		}
}
int my_search(const char *p,const char *q)
{
	int i,j,k;
	for(i=0;p[i];i++)
	{
		if(p[i]==q[0])
		{
			for(j=1,k=i+1;q[j];j++,k++)
			{
				if(p[k]!=q[j])
					break;
			}
			if(j==my_strlen(q))
				return 1;
			else
				return 0;
		}
	}
}
int my_strlen(const char *p)
{
	int i=0;
	for(i=0;p[i];i++);
		return i;
}
