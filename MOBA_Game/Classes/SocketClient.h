#pragma once

//�ͻ��ˣ�

#ifndef __SOCKET_CLIENT_H__ 
#define __SOCKET_CLIENT_H__ 
#include "SocketBase.h" 

class SocketClient : public SocketBase 
{ 

public: 
	SocketClient(void); 
~SocketClient(void);
bool connectServer(const char* serverIP, unsigned short port);    //���ӷ�����
void sendMessage(const char* data, int count);         //�����˷�����Ϣ

std::function<void(const char* data, int count)> onRecv;     //���ܷ��������ݵĻص�����
std::function<void()> onDisconnect;          //�Ͽ����ӵĻص�����

private:
	bool initClient(); 
void recvMessage(); 

private: 
	HSocket _socketServer;
	HSocket _socektClient;

}; 
#endif
