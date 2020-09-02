#ifndef BST_H
#define BST_H

#include <string>
#include <iostream>

#include "BSTNode.h"

using namespace std;

struct BST
{
	BSTNode* root = NULL;

public:

	// Works on given data and seperate the fields
	void processUserData(string);

	// Inserts BSTNode to tree
	BSTNode* insertNodeToBST(BSTNode*, User*);
};

#endif
