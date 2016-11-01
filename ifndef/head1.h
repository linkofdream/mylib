#ifndef _HEAD1_H_
	#define _HEAD1_H_ 1

	extern int glb_var1;
	extern int max(int,int);



#if OS==1
        printf("asfd");
#else
        printf("glb_var=%d",glb_var1);
#endif


#endif
