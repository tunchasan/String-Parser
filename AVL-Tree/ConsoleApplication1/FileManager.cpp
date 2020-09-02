#include "FileManager.h"
#include "BST.h"

 void FileManager::readAndProcessFile(string fileName)
{
	// Read File with fileName
	ifstream file(fileName);

	string line = "";

	// Create new BST instance
	BST bst;

	// Line by Line read process on the file
	while (getline(file, line))
	{
		// Send data to Binary Tree
		bst.processUserData(line);
	}

	bst.Inorder(bst.root);
}
