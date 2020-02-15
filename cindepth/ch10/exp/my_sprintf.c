#include<stdio.h>
#include<malloc.h>
char *my_sprintf(float ,int);
void main()
{
	float f;
	char *p;
	int dec;
	printf("Enter the number\n");
	scanf("%f",&f);
	printf("Enter the number of decimals after point\n");
	scanf("%d",&dec);
	p=my_sprintf(f,dec);
	printf("%s\n",p);
}
char *my_sprintf(float f,int n)
{
	char *p;
	int i,j=0,k;
	p=malloc(10*sizeof(char));
	i=f;
	k=f;
	for(;i>0;i=i/10)
	{
		p[j++]=i%10+48;
	}
	p[j++]='.';
	while(n)
	{
		f=f-k;
		f=f*10;
		k=f;
		p[j++]=k+48;
		n--;
	}
	p[j]='\0';
	return p;
}	
		
