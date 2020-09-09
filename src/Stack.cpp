#include "Stack.h"

void Stack::insertToStack(StackNode *newNode)
{
	if (root == NULL)
	{

		root = newNode;

		return;
	}

	StackNode *temp = root;

	root = newNode;

	root->next = temp;
}

void Stack::travelStack()
{

	StackNode *travel = root;

	while (travel != NULL)
	{

		cout << travel->action << endl;

		travel = travel->next;
	}
}
