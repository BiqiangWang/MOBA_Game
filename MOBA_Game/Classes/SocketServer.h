#pragma once
//�����:


#ifndef __SOCKET_SERVER_H__ 
#define __SOCKET_SERVER_H__ 
#include "SocketBase.h" 

class SocketServer : public SocketBase 
{ 
public:
static SocketServer* create(); 
SocketServer();
~SocketServer(); 
bool startServer(); 
void sendMessage(HSocket socket, const char* data, int count);      //��ָ���ͻ��˷�����Ϣ
void sendMessage(const char* data, int count);     //�����пͻ��˷�����Ϣ
std::function<void(const char* ip)> onStart;      //����˿�����Ļص�����
std::function<void(HSocket socket)> onNewConnection;       //��������ʱ�Ļص�����
std::function<void(const char* data, int count)> onRecv;   //������Ϣʱ�Ļص�����
std::function<void(HSocket socket)> onDisconnect;          //�пͻ��˶Ͽ��Ļص�����

private: 
bool initServer(); 
void acceptClient(); 
void acceptFunc();
void newClientConnected(HSocket socket); 
void recvMessage(HSocket socket); 

private: 
HSocket _socketServer; 

private:
	std::list<HSocket> _clientSockets;
}; 
#endif

