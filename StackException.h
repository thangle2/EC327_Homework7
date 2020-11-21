#ifndef STACKEXCEPTION_H
#define STACKEXCEPTION_H

#include <exception>

class StackException{
public:
	virtual const char * what() const throw(); 
	StackException();
private:
		const char* err;
};
#endif