#include<stdio.h>
main()
{
short arr[5];
short *p=NULL;
short (*p_arr)[5]=&arr;

printf("sizeof(short):%d,sizeof(Point):%d\n",sizeof(short),sizeof(p));
printf("arr:%p\n",arr);
printf("arr+1:%p\n",arr+1);
printf("arr[0]:%p\n",&arr[0]);
p=arr;
printf("p:%p\n",p);
printf("p_arr:%p\n",p_arr);
printf("p+1:%p\n",p+1);
printf("p_arr+1:%p\n",p_arr+1);
printf("&arr+1:%p",&arr+1);
}
