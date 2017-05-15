#ifndef _MESSAGE_QUEUE_H_
#define _MESSAGE_QUEUE_H_

#include "Message.h"
#include "User.h"

class MessageQueue
{

private:
	unsigned int size;
	Message** messages;

	unsigned int used;

public:
	MessageQueue(unsigned int size);

	void addMessage(Message *m);

	unsigned int getNumMessages() const;
	Message** getMessages() const;

	/**** Add missing methods ***/
	/****************************/
};

#endif