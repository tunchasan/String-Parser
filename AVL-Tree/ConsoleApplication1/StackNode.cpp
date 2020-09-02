#include "StackNode.h"

StackNode * StackNode::createStackNode(char action)
{
	StackNode* newNode = new StackNode;

	newNode->action = action;

	return newNode;
}
