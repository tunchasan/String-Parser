#include <string>
#include <iostream>
#include <fstream>
#include <iostream>

#include "FileManager.h"
#include "StackNode.h"
#include "Stack.h"

using namespace std;

int main()
{
	// Create new instance of FileManager
	FileManager fileManager;

	// Send file name to function
	fileManager.readAndProcessFile("Kisiler.txt");

	/*Stack* stack = new Stack;

	StackNode* node1 = new StackNode;

	stack->insertToStack(node1->createStackNode('a'));


	StackNode* node2 = new StackNode;

	stack->insertToStack(node2->createStackNode('b'));


	StackNode* node3 = new StackNode;

	stack->insertToStack(node3->createStackNode('c'));


	StackNode* node4 = new StackNode;

	stack->insertToStack(node4->createStackNode('d'));

	stack->travelStack();*/

	system("pause");
}

