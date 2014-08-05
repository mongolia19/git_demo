#include "tcp_client.h"
#include "lwip/debug.h"
#include "lwip/stats.h"
#include "lwip/tcp.h"
#include "usart.h"
#include "string.h"
#include "lwip_demo.h"

enum HelloWorld//连接状态
{
  ES_NONE = 0,			
  ES_RECEIVED,		//接收到了数据
  ES_CLOSING			//连接关闭
};


