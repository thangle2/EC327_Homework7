#include <iostream>
#include "Stack.h"
#include "Stack.cpp"
#include "StackException.h"
#include <exception>
using namespace std;
int main(){

	Stack<int> test;
	try
	{
	test.pop();
	}
	catch(StackException & ex)
	{
	cout << ex.what()<<endl; // prints the error message
	}
}