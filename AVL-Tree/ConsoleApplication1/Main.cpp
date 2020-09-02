#include <string>
#include <iostream>
#include <fstream>
#include <iostream>

#include "FileManager.h"

using namespace std;

int main()
{
	// Create new instance of FileManager
	FileManager fileManager;

	// Send file name to function
	fileManager.readAndProcessFile("Kisiler.txt");

	system("pause");
}

