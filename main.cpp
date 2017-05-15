#include "User.h"
#include "Message.h"
#include "AttachMessage.h"
#include "MessageQueue.h"

#include <iostream>
using namespace std;

void printAll(Message** messages, unsigned int size) 
{
	for (int i = 0; i < size; i++)
		messages[i]->show();
}

int main()
{
	MessageQueue mQueue(5);

	User* user1 = new User(0, "User1");
	User* user2 = new User(1, "User2");

	mQueue.addMessage(new Message(0, "Hello", user1->getId()));
	mQueue.addMessage(new Message(1, "How are you?", user1->getId()));

	mQueue.addMessage(new Message(2, "Fine, thank you", user2->getId()));

	unsigned char data[] = {0x64, 0x65, 0x66, 0x67};
	mQueue.addMessage(new AttachMessage(3, "This is a photo", user2->getId(), data, sizeof(data)));

	cout << endl;
	cout << "Pending messages: " << mQueue.getNumMessages() << endl;
	printAll(mQueue.getMessages(), mQueue.getNumMessages());

	unsigned int numMessagesForUser1 = mQueue.getNumMessagesFor(*user1);
	Message** messagesForUser1 = mQueue.filterMessages(*user1);

	cout << endl;
	cout << "Messages for User1: " << numMessagesForUser1 << endl;
	printAll(messagesForUser1, numMessagesForUser1);

	unsigned int numMessagesForUser2 = mQueue.getNumMessagesFor(*user2);
	Message** messagesForUser2 = mQueue.filterMessages(*user2);

	cout << endl; 
	cout << "Messages for User2: " << numMessagesForUser2 << endl;
	printAll(messagesForUser2, numMessagesForUser2);
	
	delete[] messagesForUser1;
	delete[] messagesForUser2;

	delete user1;
	delete user2;
}