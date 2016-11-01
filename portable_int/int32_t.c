typedef unsigned int INT32_T;
typedef unsigned long int INT64_T;
#include <stdio.h>

main()
{

printf("INT_wordsize is:%d\n",sizeof(int));
printf("INT32_T_wordsize is:%d\n",sizeof(INT32_T));
printf("INT64_T_wordsize is:%d\n",sizeof(INT64_T));
printf("sizeof(longlong) is:%d\n",sizeof(long long));
}
