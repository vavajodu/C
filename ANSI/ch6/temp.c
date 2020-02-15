#include<stdio.h>
#include<malloc.h>
typedef struct {
	int a;
	short s[2];
	}MSG;
int main()
{
	MSG *mp,m={4,2,1};
	char *fp,*tp;
	mp=(MSG *)malloc(sizeof(MSG));
/*	for(fp=(char *)m.s,tp=(char *)mp->s;tp<(char *)(mp+1);)
	{
		printf("%c %c\n",*fp,*tp);
		*tp++=*fp++;
	}*/
	fp=(char *)m.s+1;
//	tp=(char *)m.s+1;
//	++*fp;
//	printf("%d %d %d\n",mp->a,mp->s[0],mp->s[1]);
	printf("%d\n",*fp);
	return 0;
}
