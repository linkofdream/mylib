/*	Linux平台下的新闻阅读工具
 *	纯C 开放源代码
 *	Centos 6.5
 *	2016.10.11 cyou-inc.com ssj
	---------------------------
	结构：
	1、抽取argv指定的网站首页内容
	2、展示文本内容
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<arpa/inet.h>
#include<sys/socket.h>
#include<netdb.h>
main (int argc, char *argv[])
{

  struct sockaddr_in SVR_IP,from_adr;
  char ip[] = "61.135.169.121";
  short port = 80;
  char buf[4096];
  bzero (buf, sizeof (buf));
  int svr_sock = socket (AF_INET, SOCK_STREAM, 0);
  static const char *http_header =
    "GET http://www.baidu.org/index.html HTTP/1.1/n"
    "Accept: */*/n"
    "User-Agent:iPanelBrowser/2.0/n"
    "Host: www.baidu.com/n";

  struct hostent *host;
	host=gethostbyname("www.baidu.com");
	int i;
 printf("host:%s\n",host->h_name); 
 for (i=0;host->h_aliases[i] != NULL;i++)
        {
        printf("aliases::%s\n",host->h_aliases[i]);
        }
 for (i=0;host->h_addr_list[i] != NULL;i++)
	{
  	printf("ip:%s\n",inet_ntoa(*(struct in_addr*)host->h_addr_list[i]));
	}



  if (svr_sock == -1)
    {
      printf ("socket error!\n");
      exit (-1);
    }
  memset (&SVR_IP, 0, sizeof (SVR_IP));
  SVR_IP.sin_family = AF_INET;
  SVR_IP.sin_port = htons (port);
  SVR_IP.sin_addr.s_addr =inet_addr(inet_ntoa(*(struct in_addr*)host->h_addr_list[0]));

  if (connect(svr_sock, (struct sockaddr *) &SVR_IP, sizeof (struct sockaddr)) == -1)
    {
      printf ("connect error!\n");
      exit (-1);
    }

int a;
 a= write (svr_sock, http_header, strlen (http_header));
sleep(5);
  a=read(svr_sock,&buf,sizeof(buf));
//    a=sendto(svr_sock, http_header, strlen (http_header),0,(struct sockadd*)&SVR_IP,sizeof(SVR_IP));
	
//int	adr_sz;
//adr_sz=sizeof(from_adr);
//  a=recvfrom (svr_sock, buf, sizeof (buf) ,0,(struct sockaddr*)&from_adr,&adr_sz);

 printf ("%s", buf);

}
