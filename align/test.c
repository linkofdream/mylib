#include<stdio.h>
main()
{

struct Data
	{
	char c;
	short s;
	int i;
	} A;
struct Data_b
	{
	short s;
	char c;
	int i;
	} B;

struct Data_c
        {
	int i;
        char c;
        short s;;
        } C;

printf("%d,%d,%d",sizeof(A),sizeof(B),sizeof(C));

}
