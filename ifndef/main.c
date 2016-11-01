#include<stdio.h>
#include "head1.h"

int glb_var1=8;
main()
{
#if OS==1
	printf("asfd");
#else
	printf("glb_var=%d",glb_var1);
#endif

}
