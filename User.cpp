#include "User.h"
#include <string.h>

User::User(unsigned int id, const char* nick)
{
	this->id = id;
	this->nick = new char[strlen(nick) + 1];
	strcpy(this->nick, nick);
}

User::~User()
{
	delete[] nick;
}

unsigned int User::getId() const
{
	return id;
}

char* User::getNick() const
{
	return nick;
}