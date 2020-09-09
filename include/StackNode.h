#ifndef STACKNODE_H
#define STACKNODE_H

#include <string.h>
#include <iostream>

using namespace std;

struct StackNode
{
	friend struct Stack;

private:
	StackNode* next = NULL;

	char action;

public:

	StackNode* createStackNode(char);
};

#endif 
