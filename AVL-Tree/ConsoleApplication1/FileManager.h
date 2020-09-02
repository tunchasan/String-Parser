#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#include <string>
#include <iostream>
#include <fstream>

using namespace std;

struct FileManager
{
public:
	// Read the given file and send processed data to Binary Search Tree
	void readAndProcessFile(string);
};

#endif