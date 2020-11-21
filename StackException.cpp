#include <iostream>
#include <exception>
#include "StackException.h"
using namespace std;

StackException:: StackException(){
	err="There are no items on stack!";
}

const char * StackException::what() const throw(){
	return  err;
}