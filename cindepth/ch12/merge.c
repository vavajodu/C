#include<stdio.h>
void main(int argc,char **argv)
{
	if(argc!=4)
	{
		printf("Usage:./a.out fname1 fname2 fname3\n");
		return;
	}
	FILE *fa,*fb,*fc;
	char ch1,ch2;
	int l1,l2,i=0,j=0;
	fa=fopen(argv[1],"r");
	fb=fopen(argv[2],"r");
	fc=fopen(argv[3],"w");
	while((ch1=fgetc(fa))!=EOF)
		i++;
	while((ch1=fgetc(fb))!=EOF)
		j++;
	l1=i;
	l2=j;
	rewind(fa);
	rewind(fb);
	for(i=0;i<l1+l2;)
	{
		if((ch1=fgetc(fa))!=EOF)
		{
			fputc(ch1,fc);
			i++;
		}
		if((ch2=fgetc(fb))!=EOF)
		{
			fputc(ch2,fc);
			i++;
		}
	}
	fclose(fa);
	fclose(fb);
	fclose(fc);
	printf("Done\n");
}
	
		
	
	
