#ifndef __NEWS_SOCKET__H__
#define __NEWS_SOCKET__H__
#endif
#include<sys/socket.h>

//read读取指定URL网址的内容，保留全部数据放入池子中，等待清洗；
extern int read(const char* url,char* raw_content);
//clean清洗原始数据，去掉HTML格式。
extern int clean(char*raw_content,char* clean_content);
//layout重新排版
extern void layout(char* clean_content,char* dictionary);
//show展示内容
extern int show(char* clean_content);

typedef struct sockaddr_in IPADDR4;
