#ifndef BSTNODE_H
#define BSTNODE_H

#include <string.h>
#include <iostream>

#include "User.h"
#include "Stack.h"

using namespace std;

struct BSTNode
{
	User* user = nullptr;

	Stack* stack = nullptr;
};

#endif