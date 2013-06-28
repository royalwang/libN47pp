

class N47ISocket
{
public:
	virtual OnConnect(const int errCode) = 0;
	virtual OnClose(const int errCode) = 0;
	virtual OnReceive(const char *buf, const int bufLen) = 0;
	
};