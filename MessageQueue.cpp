#include "MessageQueue.h"

MessageQueue::MessageQueue(unsigned int size)
{
	this->messages = new Message*[size];
	this->size = size;

	this->used = 0;
}

void MessageQueue::addMessage(Message *m)
{
	if (this->used < size)
	{
		this->messages[used] = m;
		this->used++;
	}
}

unsigned int MessageQueue::getNumMessages() const
{
	return used;
}

Message** MessageQueue::getMessages() const
{
	return messages;
}