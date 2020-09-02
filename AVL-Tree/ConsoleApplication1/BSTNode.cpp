#include "BSTNode.h"

BSTNode * BSTNode::createNode(User *user, Stack *stack)
{
	BSTNode* newNode = (BSTNode*)malloc(sizeof(BSTNode));

	newNode->user = user;

	newNode->stack = stack;

	return newNode;
}
