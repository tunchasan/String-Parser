#ifndef BSTNODE_H
#define BSTNODE_H

#include <string.h>
#include <iostream>

#include "User.h"
#include "Stack.h"

using namespace std;

struct BSTNode
{

	friend struct BST;

private:

	User* user = NULL;

	Stack* stack = NULL;

	BSTNode* left = NULL;

	BSTNode* right = NULL;

public:

	// Create BSTNode
	BSTNode* createNode(User*, Stack*);
};

#endif