/**
* @description Verilen kişiler bilgilerini Binary Search Tree
yapısında tutan ve bunu işleyen program
* @course 1-A
* @assignment Veri Yapıları 2.Odev
* @date 01.09.2020
* @author Osman Kurt G161210374
*/

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
