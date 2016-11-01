#include<stdio.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<stddef.h>
#include<string.h>
main()
{
//struct sockaddr_in A;
//struct in_addr B;
struct data 
	{
	 char a;
	 long int c;
	 double b;
	}A;
int arr[5]={65795,2,3,4,5};

char *cp=NULL;
short *sp=NULL;
int *ip=NULL;
printf("%p,%p\n",arr,&arr);

printf("%p,%p\n",arr+1,&arr+1);

printf("*arr:%d\n",*arr);
printf("(char*)arr:%d\n",*(char*)arr);
printf("(short*)arr:%d\n",*(short*)arr);
printf("(char)arr[0]:%d\n",(char)arr[0]);
arr[1]=0x80000003;
arr[2]=0x7ffffffd;
char c=0x83;
printf("%d,%d,%d,(char)arr[1]:%d\n",arr[1],arr[2],c,(char)arr[1]);
char *pp="ASdfasfd";
printf("\n\n\n\n\%d",strlen(pp));
char ppp[]="asdfasdf";
ppp[0]='x';
}
