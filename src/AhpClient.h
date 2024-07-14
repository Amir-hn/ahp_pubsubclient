#ifndef ahp_client_h
#define ahp_client_h
#include "Client.h"

class AhpClient : Client
{

public:
    virtual void publishMessage(const char* topic, const char* payload,int qos,bool retain,int mux);
  virtual void subscribeTopic(const char* topic,int qos);
  virtual void  unsubscribeTopic(const char* topic);
};


#endif