#ifndef STACK_H
#define STACK_H

#include "StackNode.h"

struct Stack
{
private:
	StackNode* root = NULL;

public:

	void insertToStack(StackNode*);

	void travelStack();
};

#endif 
