/*
* @brief 
* @author
*/

#ifndef _N47_MSG_H_
#define _N47_MSG_H_

#pragma pack(1)

typedef struct _N47_MSG_HEADER
{
	uint8 version;///< 协议版本号
	uint8 reserved;///< 保留字段
	uint16 msgType;///< 消息类型
	uint32 length;///< 报文长度
}N47_MSG_HEADER, *PN47_MSG_HEADER;

#pragma pack()


class N47Msg
{
public:
	N47Msg(void){ m_msgHeader = new N47_MSG_HEADER; m_msgBody = NULL; }
	~N47Msg(void) { if (m_msg->body) delete m_msg->body; delete m_msg; }
	void SetVersion(const uint8 version) { m_msg->version = version; }
	const uint8 GetVersion(void) { return (uint8)m_msg->version; }
	void SetMsgType(const uint16 msgType) { m_msg->msgType = msgType; }
	const uint16 GetMsgType(void) { return (uint16)m_msg->msgType; }
	void SetBody(const char *body, const size_t size)
	{
		if ()
	}
	const char *GetBuf() const;
	const size_t GetLength() const;
	const size_t GetBody(const char *body) const;

private:
	PN47_MSG_HEADER m_msgHeader;
	char *m_msgPtr;
	 m_msgLength;
};

#endif //!_N47_MSG_H_