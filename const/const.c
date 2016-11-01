#include<stdio.h>
main()
{
const int i1=20;
int *p1=(int*)&i1;
int *p2=p1;
*p1=100;

printf("%d,%d,%d\n",i1,*p1,*p2);
printf("%p,%p,%p\n",&i1,p1,p2);
return 0;
}
