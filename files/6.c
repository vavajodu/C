#include<stdio.h>
main()
{
	FILE *fs,*ft;
	char c[10];
	fs=fopen("data","r");
	c=fgetc(fs);
	fseek(fs,0,SEEK_END);
	fseek(fs,-3L,SEEK_CUR);
	fgets(c,5,fs);
	puts(c);



}
