#include "tcp_client.h"
#include "lwip/debug.h"
#include "lwip/stats.h"
#include "lwip/tcp.h"
#include "usart.h"
#include "string.h"
#include "lwip_demo.h"

enum HelloWorld//����״̬
{
  ES_NONE = 0,			
  ES_RECEIVED,		//���յ�������
  ES_CLOSING			//���ӹر�
};


