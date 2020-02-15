#include<stdio.h>
main()
{
int a[5];
int i,ele,biggest;
ele=sizeof(a)/sizeof(a[0]);
printf("Enter an array\n");
for(i=0;i<ele;i++)
scanf("%d",&a[i]);
biggest=a[0];
for(i=0;i<ele;i++)
{if(a[i]<a[i+1])
biggest=a[i+1];
}
printf("biggest element is %d\n",biggest);
}
