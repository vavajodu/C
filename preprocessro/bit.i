# 1 "bit.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "bit.c"
# 24 "bit.c"
main()
{
 int op,num,position;
 printf("Enter the number\n");
 scanf("%d",&num);
 printf("Enter the position\n");
 scanf("%d",&position);
 printf("Enter the option\n");
 scanf("%d",&op);
 { switch(op) { case 1: { num=num|1<<position; printf("num=%d\n",num); break; } case 2: { num=num&~(1<<position); printf("num=%d\n",num); break; } case 3: { num=num^(1<<position); printf("num=%d\n",num); break; } } };
}
