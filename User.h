#ifndef _USER_H_
#define _USER_H_

class User
{
private:
	unsigned int id;
	char * nick;

public:
	User(unsigned int id, const char * nick);
	~User();

	unsigned int getId() const;
	char* getNick() const;
};

#endif